/* A program to reverse an input integer.*/

#include <iostream>

int reverse(int num) {
    int result = 0;
    while(num != 0) {
        int rem = num % 10;
        result = result * 10 + rem;
        num = num / 10;
    }
    return result;
}

int main() {
    int n = 12345;
    std::cout << "Reverse of " << n << ": " << reverse(n) << std::endl;

    n = 012; // This is treated as octal number. In decimal its value = 10.
    std::cout << "Reverse of " << n << ": " << reverse(n) << std::endl; 
    // Hence, output = 1

    n = 120;
    std::cout << "Reverse of " << n << ": " << reverse(n) << std::endl;
    
    n = -123;
    std::cout << "Reverse of " << n << ": " << reverse(n) << std::endl; 

    n = 0;
    std::cout << "Reverse of " << n << ": " << reverse(n) << std::endl; 
}