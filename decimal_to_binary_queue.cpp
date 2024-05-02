
#include "binary_conversion.h"
#include <queue>

std::string decimalPartToBinaryQueue(double decimal) {
    std::queue<int> binaryQueue;
    while (decimal > 0) {
        decimal *= 2;
        int digit = int(decimal);
        binaryQueue.push(digit);
        decimal -= digit;
    }
    std::string binary = "";
    while (!binaryQueue.empty()) {
        binary += std::to_string(binaryQueue.front());
        binaryQueue.pop();
    }
    return binary;
}
