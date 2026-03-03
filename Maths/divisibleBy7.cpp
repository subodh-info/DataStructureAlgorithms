/* A program to check if a number is divisible by 7 or not.
As we learnt in the previously that using modulo operator is not the best way to check 
if a number is divisible by number 'X' or not if the number is very large.
So we use the mathematical rule to verify that a number is divible by 'X' or not. 

Here, we follow the same approach to check if a number is divisible by 7 or not.
The rule is as follows:
1. Take the last digit of the number and double it.
2. Subtract the doubled value from the remaining leading truncated number.
3. Repeat this process with the new number until you get a small number that is easy to check
for divisibility by 7. If the final result is divisible by 7, 
then the original number is also divisible by 7.   

let's understand with the help of an example:
Consider the number 5497555 is divisible by 7 or not.
1. Take the last digit of the number and double it.
   Last digit = 5, doubled value = 10
2. Subtract the doubled value from the remaining leading truncated number.
   Remaining leading truncated number = 549755,
    New number = 549755 - 10 = 549745

new number = 549745
1. Take the last digit of the number and double it.
   Last digit = 5, doubled value = 10
2. Subtract the doubled value from the remaining leading truncated number.
    Remaining leading truncated number = 54974,
     New number = 54974 - 10 = 54964
new number = 54964
1. Take the last digit of the number and double it.
    Last digit = 4, doubled value = 8
2. Subtract the doubled value from the remaining leading truncated number.
    Remaining leading truncated number = 5496,
    New number = 5496 - 8 = 5488
new number = 5488
1. Take the last digit of the number and double it.
    Last digit = 8, doubled value = 16
2. Subtract the doubled value from the remaining leading truncated number.
    Remaining leading truncated number = 548,
    New number = 548 - 16 = 532
new number = 532
1. Take the last digit of the number and double it.
    Last digit = 2, doubled value = 4
2. Subtract the doubled value from the remaining leading truncated number.
    Remaining leading truncated number = 53,
    New number = 53 - 4 = 49
new number = 49
Here, the small number we got is 49, which is divisible by 7.
So, we can conclude that the original number 5497555 is also divisible by 7.

NOTE:- Apart from this approach, if the last digit of the number is 0 or 7, 
then the number is also divisible by 7.
*/

#include <iostream>
#include <string>

bool isDivisibleBy7(const std::string& number) {
    // Check if the last digit is 0 or 7
    char lastDigit = number.back();
    if (lastDigit == '0' || lastDigit == '7') {
        return true;
    }

    // Convert the string to a long long integer
    long long num = std::stoll(number);

    // Apply the divisibility rule for 7
    while (num >= 100) { // We can stop when the number is less than 100
        long long lastDigit = num % 10; // Get the last digit
        num /= 10; // Remove the last digit
        num -= 2 * lastDigit; // Subtract double of the last digit from the remaining number
    }

    // Check if the final result is divisible by 7
    return num % 7 == 0;
}

int main() {
    // std::string number = "5497555"; // Example number
    // std::cout << "Is " << number << " divisible by 7? " 
    //           << (isDivisibleBy7(number) ? "Yes" : "No") << std::endl;

    std::string number = "12345678901234567890"; // Example of a large number
    std::cout << "Is " << number << " divisible by 7? " 
              << (isDivisibleBy7(number) ? "Yes" : "No") << std::endl;
}

/* There is another approach to check if a number is divisible by 7 or not, 
which is repeatedly subtracting 7 from the number until we get a small number that is easy to check for divisibility by 7.
If any point, the result of substraction becomes 0, then the original number is divisible by 7.
If the number reduces to a value smaller than 7, and is not 0, then the original number is not divisible by 7.

Below is the cpp program to implement this approach.

bool isDivisibleBy7(const std::string& number) {
    // Convert the string to a long long integer
    long long num = std::stoll(number);

    // Repeatedly subtract 7 from the number
    while (num >= 7) {
        num -= 7;
    }

    // Check if the final result is 0
    return num == 0;
}
*/