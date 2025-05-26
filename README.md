# XOR-EC-DC
Code Overview This C++ program performs simple XOR-based encryption and decryption on files. Users can provide an input file, an output file, and a single-character key to modify the file's contents. The program supports both encryption and decryption via an interactive menu.
Code Breakdown (Catalogue Style)

1. Libraries and Namespace
- #include <iostream>: Enables standard input and output operations.
- #include <fstream>: Allows file handling operations (reading and writing files).
- using namespace std;: Avoids prefixing std:: before standard objects.
2. File Processing Function (processFile)
- Purpose: Performs XOR-based encryption or decryption based on input parameters.
- Workflow:
- Opens files in binary mode.
- Checks if files opened successfully.
- Reads input file byte by byte.
- Applies XOR transformation with a given key and writes the result.
- Closes files after processing.
3. Encryption Function (encryptFile)
- Purpose: Encrypts a file using XOR logic.
- Workflow: Similar to processFile, applies XOR transformation to encrypt.
4. Decryption Function (decryptFile)
- Purpose: Decrypts a file using XOR (same operation as encryption).
- Workflow: Reads bytes, applies XOR again to restore the original content.
5. Main Function (main)
- Purpose: Handles user input and determines whether to encrypt or decrypt.
- Workflow:
- Asks user for operation choice.
- Gets file names and encryption key.
- Calls appropriate function (processFile) based on user selection.


