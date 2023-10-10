#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    const std::string filename = argv[1];
    const std::string s1 = argv[2];
    const std::string s2 = argv[3];

    // Open the input file
    std::ifstream inputFile(filename);
    if (!inputFile)
	{
        std::cerr << "Error: Cannot open input file " << filename << std::endl;
        return 1;
    }

    // Create the output file with ".replace" appended to the original filename
    const std::string outputFilename = filename + ".replace";
    std::ofstream outputFile(outputFilename);
    if (!outputFile)
	{
        std::cerr << "Error: Cannot create output file " << outputFilename << std::endl;
        return 1;
    }

    char currentChar;
    std::string buffer; // To store characters temporarily

    while (inputFile.get(currentChar))
	{
        if (currentChar == s1[0]) {
            // Check if the current character matches the first character of s1
            buffer += currentChar;
            size_t s1Index = 1;

            while (s1Index < s1.length() && inputFile.get(currentChar))
			{
                buffer += currentChar;
                if (currentChar == s1[s1Index]) {
                    s1Index++;
                } else {
                    break;
                }
            }

            if (s1Index == s1.length())
			{
                // Found a complete match for s1, so write s2 to the output file
                outputFile << s2;
                buffer.clear(); // Clear the buffer
            } 
			else
			{
                // Write the buffered characters to the output file
                outputFile << buffer;
                buffer.clear();
            }
        }
		else
		{
            // Write the current character to the output file
            outputFile << currentChar;
        }
    }

    // Close the input and output files
    inputFile.close();
    outputFile.close();

    std::cout << "File '" << filename << "' has been processed. Modified content saved to '" << outputFilename << "'" << std::endl;

    return 0;
}
