/* This program checks if a given number is divisible by 8 or not. 
For this purpose, we will take the last three digits of the number and check 
if they are divisible by 8.
The reason we only need to check the last three digits is that 
any number can be expressed as:
N = 1000 * Q + R

Where Q is the quotient when N is divided by 1000, and R is the remainder (the last three digits of N).
Since 1000 is divisible by 8, we can focus on R to determine if N is divisible by 8.
If R is divisible by 8, then N is also divisible by 8.
*/

#include <iostream>
#include <string>

bool isDivisibleBy8(const std::string& number) {
    // Get the last three digits of the number
    std::string lastThreeDigits = number.substr(number.length() - 3);
    
    // Convert the last three digits to an integer
    int lastThreeDigitsInt = std::stoi(lastThreeDigits);
    
    // Check if the last three digits are divisible by 8
    return (lastThreeDigitsInt % 8 == 0);
}

int main() {
    // std::string number = "123456789";
    // if (isDivisibleBy8(number)) {
    //     std::cout << number << " is divisible by 8." << std::endl;
    // } else {
    //     std::cout << number << " is not divisible by 8." << std::endl;
    // }

    std::string number = "102400";
    if (isDivisibleBy8(number)) {
        std::cout << number << " is divisible by 8." << std::endl;
    } else {
        std::cout << number << " is not divisible by 8." << std::endl;
    }
}