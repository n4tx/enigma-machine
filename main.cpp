#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>
#include "enigma_machine.h"

int main() {
    // Define rotor configuration
    std::vector<int> rotorConfig = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // Replace with actual rotor configuration

    // Create Enigma machine
    EnigmaMachine enigma(rotorConfig);
    std::cout << "Only use uppercase letters for encrypting/decrypting" << std::endl;

    // User input loop
    while (true) {
        SetConsoleTitleA("Sammy's Enigma Machine");
        std::cout << "Enter 'e' to encrypt, 'd' to decrypt, or 'q' to quit: ";
        char choice;
        std::cin >> choice;

        if (choice == 'q') {
            break; // Exit the loop if 'q' is entered
        }
        else if (choice == 'e') {
            std::cout << "Enter text to encrypt: ";
            std::string inputText;
            std::cin.ignore(); // Ignore any remaining newline character
            std::getline(std::cin, inputText);

            std::string processedText;
            // Encrypt the input text
            for (char c : inputText) {
                processedText += enigma.encrypt(c);
            }
            std::cout << "Encrypted text: " << processedText << std::endl;
        }
        else if (choice == 'd') {
            std::cout << "Enter text to decrypt: ";
            std::string inputText;
            std::cin.ignore(); // Ignore any remaining newline character
            std::getline(std::cin, inputText);

            std::string processedText;
            // Decrypt the input text
            for (char c : inputText) {
                processedText += enigma.decrypt(c);
            }
            std::cout << "Decrypted text: " << processedText << std::endl;
        }
        else {
            std::cout << "Invalid choice. Please try again." << std::endl;
            continue; // Restart the loop immediately
        }
    }

    return 0;
}
