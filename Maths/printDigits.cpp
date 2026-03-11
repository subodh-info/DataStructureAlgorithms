/* A program to print all digits from the input integer.*/

#include <iostream>
#include <cmath>
#include <vector>
// this function prints the digits in revers order. 
// example: input = 120
// output: 0, 2, 1
void print(int num) {
    if(num == 0) {
        std::cout << 0 << " ";
    }
    if(num < 0) {
        num = std::abs(num);
    }
    while(num != 0) {
        std::cout << num % 10 << ", ";
        num /= 10;
    }
    std::cout << std::endl;
}

// Below function print the digits in same order
// as they exist in the input value.
// example: input = 120
// output: 1, 2, 0

void printDigits(int num) {
    if(num == 0) {
        std::cout << 0 << std::endl;
    }
    if(num < 0) {
        num = std::abs(num);
    }
    std::vector<int> digits;
    while(num > 0) {
        digits.push_back(num%10);
        num /= 10;
    }

    // print the gigits
    for(auto it = digits.rbegin(); it != digits.rend(); it++) {
        std::cout << *it << " ";
    }

    std::cout << std::endl;

}

int main() {
    int n = 121;
    print(n);
    printDigits(n);

    n = 120;
    print(n);
    printDigits(n);

    n = -121;
    print(n);
    printDigits(n);

    n = 12345;
    print(n);
    printDigits(n);
}