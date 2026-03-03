/*A program to check if a number is divisible by 13 or not.
The rule for checking divisibility by 13 is a bit more complex than some of the other divisibility rules.
To check if a number is divisible by 13, we can use the following method:

Step by Step approach:
- Pad the number with leading zeros to make its length a multiple of 3.
    -> if the number of digits is not a muliple of 3, we can add zeros at rightside to the number until its length becomes a multiple of 3.
    -> Example: 2911285 has 7 digits, we can pad it with two zeros to make it 9 digits long: 291128500.
- Split the number into groups of three digits starting from the right.
    -> Example: 291128500 can be split into three groups: 500, 128, and 291.
- Assign alternating signs to these groups, starting with a positive sign from right to left: +block, -block, +block.
    -> Example: For the groups 500, 128, and 291, we assign signs as follows: +500, -128, +291.
- Sum the signed groups.
    -> Example: The sum of the signed groups is: 500 - 128 + 291 = 663.
- If the resulting sum is divisible by 13, then the original number is also divisible by 13.
    -> Example: Since 663 is divisible by 13, we can conclude that 2911285 is also divisible by 13.
*/

#include <iostream>
#include <string>

bool divBy13(std::string number) {
    if(number.empty()) {
        return false; // An empty string cannot be considered a valid number
    }

    if(number.length() < 2) {
        // If the number has only one digit, we can directly check if it is divisible by 13
        int singleDigit = number[0] - '0'; // Convert character to integer
        return (singleDigit % 13 == 0);
    }

    // step 1: Pad the number with zeros to make its length a multiple of 3
    if(number.length() % 3 != 0) {
        if(number.length() % 3 == 1) { // Here, two zeros are needed to make the length a multiple of 3
            number += "00";
        } else if(number.length() % 3 == 2) { // Here, one zero is needed to make the length a multiple of 3
            number += "0";
        }
    }

    // Step 2: Split the number into groups of three digits starting from the right
    int sum = 0;
    int sign = 1; // Start with a positive sign
    for(int i = number.length()-1; i >=0; i--) {
        int group = 0;
        // Get the last three digits
        group += number[i--] - '0'; // Convert character to integer
        group += (number[i--] - '0') * 10; 
        group += (number[i] - '0') * 100;

        sum += sign * group; // Add the signed group to the sum
        sign *= -1; // Alternate the sign for the next group
    }

    // Step 3: Check if the resulting sum is divisible by 13
    sum = std::abs(sum); // Take the absolute value of the sum
    return (sum % 13 == 0);
}


/*
There is another method to check if a number is divisible by 13 which is based on the modulo operator.

We process the number digit by digit from left to right and kepp track of the remainter
after dividing the number by 13 at each step.
using below formula, we can calculate the remainder for the entire number:
    remainder = (remainder * 10 + current_digit) % 13
Example: For the number 2911285, we can calculate the remainder as follows:
- Start with remainder = 0
- Process the first digit '2': remainder = (0 * 10 + 2) % 13 = 2
- Process the second digit '9': remainder = (2 * 10 + 9) % 13 = 29 % 13 = 3
- Process the third digit '1': remainder = (3 * 10 + 1) % 13 = 31 % 13 = 5
- Process the fourth digit '1': remainder = (5 * 10 + 1) % 13 = 51 % 13 = 12
- Process the fifth digit '2': remainder = (12 * 10 + 2) % 13 = 122 % 13 = 5
- Process the sixth digit '8': remainder = (5 * 10 + 8) % 13 = 58 % 13 = 6
- Process the seventh digit '5': remainder = (6 * 10 + 5) % 13 = 65 % 13 = 0
Since the final remainder is 0, we can conclude that 2911285 is divisible by 13.
*/

bool divBy13UsingModulo(const std::string& number) {
    if(number.empty()) {
        return false; // An empty string cannot be considered a valid number
    }

    int remainder = 0;
    for(char digit : number) {
        remainder = (remainder * 10 + (digit - '0')) % 13; // Update the remainder using the formula
    }
    return (remainder == 0); // If the final remainder is 0, the number is divisible by 13
}

int main() {
    std::string number = "2911285";
    if (divBy13(number)) {
        std::cout << number << " is divisible by 13." << std::endl;
    } else {
        std::cout << number << " is not divisible by 13." << std::endl;
    }

    number = "123456789";
    if (divBy13(number)) {
        std::cout << number << " is divisible by 13." << std::endl;
    } else {
        std::cout << number << " is not divisible by 13." << std::endl;
    }

    number = "76945";
    if(divBy13UsingModulo(number)) {
        std::cout << number << " is divisible by 13." << std::endl;
    } else {
        std::cout << number << " is not divisible by 13." << std::endl;
    }

    number = "2911285";
    if(divBy13UsingModulo(number)) {
        std::cout << number << " is divisible by 13." << std::endl;
    } else {
        std::cout << number << " is not divisible by 13." << std::endl;
    }
}