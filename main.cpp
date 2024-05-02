//Mikeina Frazier
//05/02/2024
//CSDP 250
//Project 2

#include <iostream>
#include "binary_conversion.h"

int main() {
    // Step 1: Prompt the user to enter a decimal number
    double decimalNumber;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimalNumber;

    // Split the number into integer and decimal parts
    int integerPart = int(decimalNumber);
    double decimalPart = decimalNumber - integerPart;

    // Step 2: Convert integer part to binary using stack
    std::string binaryInteger = decimalToBinaryStack(integerPart);

    // Step 3: Convert decimal part to binary using queue
    std::string binaryDecimal = decimalPartToBinaryQueue(decimalPart);

    // Step 4: Output the result
    std::cout << "Binary representation of the decimal number: " << binaryInteger << "." << binaryDecimal << std::endl;

    return 0;
}
