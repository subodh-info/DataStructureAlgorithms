/*
A program to check input number is divisible by 6 or not.
We can directly check by using modulo '%' operator like -
if (num % 6 == 0) {
    cout << num << " is divisible by 6." << endl;
} else {
    cout << num << " is not divisible by 6." << endl;
}
Since, input number may be very large that can not possible to store in long long int especially C/C++ programming language,
we can not use n % 6 to check if a number is divisible by 6 or not.
In such cases, we can check if the number is divisible by both 2 and 3.
    1) To check if a number is divisible by 2, we can check if the last digit is even (0, 2, 4, 6, or 8).
    2) To check if a number is divisible by 3, we can sum all the digits of the number and check if the sum is divisible by 3.
*/

#include <iostream>
#include <string>

bool check(std::string str) {
    if(str.empty()) {
        return false;
    }

    // Check if the last digit is even (divisible by 2)
    int lastDigit = str[str.length() - 1] - '0';
    if (lastDigit % 2 != 0) {
        return false; // Not divisible by 2
    }

    // Check if the sum of digits is divisible by 3
    int sumOfDigits = 0;
    for (char digit : str) {
        sumOfDigits += (digit - '0');
    }
    return sumOfDigits % 3 == 0; // Divisible by 3
}

int main() {
    // std::string numbers = "123456758";
    // std::cout << (check(numbers) ? "Yes" : "No") << std::endl;

    std::string numbers = "1234567589333862";
    std::cout << (check(numbers) ? "Yes" : "No") << std::endl;
}