/*
    A program to check input number is divisible by 5 or not.
    We can directly check by using modulo '%' operator like -
    if (num % 5 == 0) {
        cout << num << " is divisible by 5." << endl;
    } else {
        cout << num << " is not divisible by 5." << endl;
    }
    Since, input number may be very large that can not possible to store in long long int especially C/C++ programming language, 
    we can not use n % 5 to check if a number is divisible by 5 or not. 
    In such cases, we can check the last digit of the number.
    If the last digit is 0 or 5, then the entire number is divisible by 5.
*/
#include <iostream>
#include <string>

bool check(std::string str) {
    int lastDigit = str[str.length() - 1] - '0';
    return lastDigit == 0 || lastDigit == 5;
}

int main() {
    // std::string number = "769520";
    // std::cout << (check(number) ? "Yes" : "No") << std::endl;

    // std::string number = "1234567589333862";
    // std::cout << (check(number) ? "Yes" : "No") << std::endl;

    std::string number = "1234567589333865";
    std::cout << (check(number) ? "Yes" : "No") << std::endl;
}