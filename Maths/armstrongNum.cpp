/* A program to check input number is armstrong or not.

What is armstrong number?
An armstrong number is a positive number that equals the sum of its own digits,
each raised to the power of the total number of digits.
e.g. 153 = pow(1, 3) + pow(5,3) + pow(3,3)
1634 = pow(1,4) + pow(6,4) + pow(3,4) + pow(4,3)
*/

#include <iostream>
#include <cmath>

int order(int num) {
    int count = 0;
    while(num != 0) {
        count++;
        num /= 10;
    }
    return count;
}

bool isArmstrong(int n) {
    int temp = n;
    int sum = 0;
    int _x = order(temp);
    while( temp > 0) {
        sum += pow(temp % 10, _x);
        temp /= 10;
    }

    return sum == n;
}

int main() {
    int num = 153;
    std::cout << num << " is armstrong number: " << std::boolalpha << isArmstrong(num) << std::endl;

    num = 1634;
    std::cout << num << " is armstrong number: " << std::boolalpha << isArmstrong(num) << std::endl;

    num = 370;
    std::cout << num << " is armstrong number: " << std::boolalpha << isArmstrong(num) << std::endl;

    num = 343;
    std::cout << num << " is armstrong number: " << std::boolalpha << isArmstrong(num) << std::endl;
}