#include <iostream>
#include <string>
#include "functions.h"

int main() {
    std::string input;
    std::cout << "This program calculates the length of a string." << std::endl
    << "Press <Enter> to exit." << std::endl
    << "Enter a string: " << std::endl;

    while (true) {
        std::getline(std::cin, input);

        if (input.empty()) {
            break;
        }

        const char* inputContent = input.c_str();
        std::cout << "Length: " << fooStrLen(inputContent) << std::endl;
    }

    std::cout << "Exiting program..." << std::endl;
    return 0;
}