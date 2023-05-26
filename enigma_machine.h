#pragma once
#include <vector>

class EnigmaMachine {
private:
    std::vector<int> rotor;

public:
    EnigmaMachine(std::vector<int> rotorConfig);

    char encrypt(char c);

    char decrypt(char c);
};
