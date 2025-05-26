#include <iostream>  // Standard input/output library
#include <fstream>   // File handling library

using namespace std;

// Function: processFile
// Description: Encrypts or decrypts a file using XOR operation with the given key.
void processFile(const string& inputFile, const string& outputFile, char key) {
    ifstream in(inputFile, std::ios::binary);  // Open input file in binary mode
    ofstream out(outputFile, std::ios::binary); // Open output file in binary mode

    // Check if files opened successfully
    if (!in || !out) {
        cerr << "Error opening file!" << endl;
        return;
    }

    char byte;
    while (in.get(byte)) { // Read file byte by byte
        out.put(byte ^ key);  // Apply XOR operation for encryption/decryption
    }

    in.close();  // Close input file
    out.close(); // Close output file
    cout << "Operation completed successfully!\n";
}

// Function: encryptFile
// Description: Encrypts a file using XOR encryption.
void encryptFile(const string& inputFile, const string& outputFile, char key) {
    ifstream in(inputFile, std::ios::binary);
    ofstream out(outputFile, std::ios::binary);

    if (!in || !out) {
        cerr << "Error opening file!" << endl;
        return;
    }

    char byte;
    while (in.get(byte)) {
        out.put(byte ^ key); // XOR operation for encryption
    }

    in.close();
    out.close();
    cout << "File encrypted successfully!\n";
}

// Function: decryptFile
// Description: Decrypts a file using XOR decryption (same XOR operation).
void decryptFile(const string& inputFile, const string& outputFile, char key) {
    ifstream in(inputFile, std::ios::binary);
    ofstream out(outputFile, std::ios::binary);

    if (!in || !out) {
        cerr << "Error opening file!" << endl;
        return;
    }

    char byte;
    while (in.get(byte)) {
        out.put(byte ^ key);  // XOR operation for decryption (reverses encryption)
    }

    in.close();
    out.close();
    cout << "File decrypted successfully!\n";
}

// Function: main
// Description: Handles user input and calls appropriate functions.
int main() {
    string inputFile, outputFile;
    char key;
    int choice;

    // Prompt user for action
    cout << "Enter 1 to Encrypt, 2 to Decrypt: ";
    cin >> choice;

    // Get file names and encryption key
    cout << "Enter input file name: ";
    cin >> inputFile;

    cout << "Enter output file name: ";
    cin >> outputFile;

    cout << "Enter encryption key (single character): ";
    cin >> key;

    // Execute operation based on user choice
    if (choice == 1) {
        processFile(inputFile, outputFile, key); // Encrypt file
        cout << "File encrypted successfully!\n";
    } else if (choice == 2) {
        processFile(inputFile, outputFile, key); // Decrypt file
        cout << "File decrypted successfully!\n";
    } else {
        cerr << "Invalid choice! Please select 1 or 2.\n";
    }

    return 0;
}
