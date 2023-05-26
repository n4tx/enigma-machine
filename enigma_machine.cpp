#include "enigma_machine.h"

EnigmaMachine::EnigmaMachine(std::vector<int> rotorConfig) : rotor(rotorConfig) {}

char EnigmaMachine::encrypt(char c) {
    // Encryption implementation
    // Replace with your custom logic

    // Example: Shifting character by 1
    return static_cast<char>((c - 'A' + 2) % 26 + 'A');
}

char EnigmaMachine::decrypt(char c) {
    // Decryption implementation
    // Replace with your custom logic

    // Example: Shifting character by 1
    return static_cast<char>((c - 'A' - 2 + 26) % 26 + 'A');
}