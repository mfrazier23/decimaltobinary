#include "binary_conversion.h"
#include <stack>

std::string decimalToBinaryStack(int decimal) {
    std::stack<int> binaryStack;
    while (decimal > 0) {
        int remainder = decimal % 2;
        binaryStack.push(remainder);
        decimal /= 2;
    }
    std::string binary = "";
    while (!binaryStack.empty()) {
        binary += std::to_string(binaryStack.top());
        binaryStack.pop();
    }
    return binary;
}
