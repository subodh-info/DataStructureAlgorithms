/* A program to check if a number is divisible by 11 or not.

Again, we can use the modulo operator to check if a number is divisible by 11. 
But, if the number is very large, it may not fit in the standard data types like long long
or unsigned long long especially in C/C++ programming language due to their limited range.

To overcome this issue, we use the string data type to store the number and then
we use the divisibility rule for 11 which states that a number is divisible by 11 
if the difference between the sume of its digits in odd positions and the sum of its digits 
in even positiions is either 0 or divisible by 11.
*/

#include <iostream>
#include <string>

bool isDivisibleBy11(const std::string& number) {
    if(number.empty()) {
        return false; // An empty string cannot be considered a valid number
    }

    int oddSum = 0;
    int evenSum = 0;

    for (size_t i = 0; i < number.length(); ++i) {
        int digit = number[i] - '0'; // Convert character to integer
        if (i % 2 == 0) { // 0-based index: 0, 2, 4... are odd positions
            oddSum += digit; // Odd position (1st, 3rd, 5th, ...)
        } else {
            evenSum += digit; // Even position (2nd, 4th, 6th, ...)
        }
    }

    int difference = std::abs(oddSum - evenSum);
    return (difference % 11 == 0);
}

int main() {
    std::string number = "123456789";
    if (isDivisibleBy11(number)) {
        std::cout << number << " is divisible by 11." << std::endl;
    } else {
        std::cout << number << " is not divisible by 11." << std::endl;
    }

    number = "1234567890";
    if (isDivisibleBy11(number)) {
        std::cout << number << " is divisible by 11." << std::endl;
    } else {
        std::cout << number << " is not divisible by 11." << std::endl;
    }

    number = "76945";
    if (isDivisibleBy11(number)) {
        std::cout << number << " is divisible by 11." << std::endl;
    } else {
        std::cout << number << " is not divisible by 11." << std::endl;
    }
}