/*
A program to check if a number is disible by 29 or not.
To check if a number is divisible by 29, we can use the modulo operator to calculate the remainder when the number is divided by 29. If the remainder is 0, then the number is divisible by 29.

We can also use the divisibility rule for 29 to check if a number is divisible by 29 without performing the actual division.

The rule for checking divisibility by 29 is as follows:
1. Take the last digit of the number and multiply it by 3.
2. Subtract the result from the rest of the number (the number formed by removing the last digit).
3. Repeat the process with the new number until you get a small number (in two digits0.
4. If the final number is divisible by 29, then the original number is also divisible by 29.

Example: For the number 123456789:
- Take the last digit (9) and multiply it by 3: 9 * 3 = 27
- Subtract the result from the rest of the number (12345678 - 27 = 12345651)
- Take the last digit (1) and multiply it by 3: 1 * 3 = 3
- Subtract the result from the rest of the number (1234565 - 3 = 1234562)
- Take the last digit (2) and multiply it by 3: 2 * 3 = 6
- Subtract the result from the rest of the number (123456 - 6 = 123450)
- Take the last digit (0) and multiply it by 3: 0 * 3 = 0
- Subtract the result from the rest of the number (12345 - 0 = 12345)
- Take the last digit (5) and multiply it by 3: 5 * 3 = 15
- Subtract the result from the rest of the number (1234 - 15 = 1219)
- Take the last digit (9) and multiply it by 3: 9 * 3 = 27
- Subtract the result from the rest of the number (121 - 27 = 94)
Here, we small number is 94 which is not divisible by 29, 
hence we can conclude that 123456789 is not divisible by 29.
*/

#include <iostream>
#include <string>

bool isDivisibleBy29(const std::string& number) {
    if(number.empty()) {
        return false; // An empty string cannot be considered a valid number
    }

    std::string currentNumber = number;
    while (currentNumber.length() > 2) { // Continue until we get a small number (in two digits)
        char lastDigitChar = currentNumber.back(); // Get the last digit as a character
        int lastDigit = lastDigitChar - '0'; // Convert the last digit character to an integer
        int product = lastDigit * 3; // Multiply the last digit by 3

        // Remove the last digit from the current number
        currentNumber.pop_back();

        // Convert the remaining part of the number to an integer
        long long remainingNumber = std::stoll(currentNumber);

        // Subtract the product from the remaining number
        long long newNumber = remainingNumber + product;

        // Update currentNumber with the new number for the next iteration
        currentNumber = std::to_string(newNumber);
    }

    // Finally, check if the resulting small number is divisible by 29
    int finalNumber = std::stoi(currentNumber);
    return (finalNumber % 29 == 0);
}

int main() {
    std::string number = "521";
    if (isDivisibleBy29(number)) {
        std::cout << number << " is divisible by 29." << std::endl;
    } else {
        std::cout << number << " is not divisible by 29." << std::endl;
    }

    number = "3567";
    if (isDivisibleBy29(number)) {
        std::cout << number << " is divisible by 29." << std::endl;
    } else {
        std::cout << number << " is not divisible by 29." << std::endl;
    }

    number = "348";
    if (isDivisibleBy29(number)) {
        std::cout << number << " is divisible by 29." << std::endl;
    } else {
        std::cout << number << " is not divisible by 29." << std::endl;
    }

    number = "1530";
    if (isDivisibleBy29(number)) {
        std::cout << number << " is divisible by 29." << std::endl;
    } else {
        std::cout << number << " is not divisible by 29." << std::endl;
    }

    number = "358024662";
    if (isDivisibleBy29(number)) {
        std::cout << number << " is divisible by 29." << std::endl;
    } else {
        std::cout << number << " is not divisible by 29." << std::endl;
    }
}