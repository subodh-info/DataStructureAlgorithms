/* A program to check input integer is palindrome or not.
A palindrome number is an integer that remains identical when its digits are reversed, 
reading the same forward and backward. eg. 121, 1331, 4554, etc. Negative numbers 
are generally not considered palindromes because the minus sign reverses to the the end
eg. -121 becomes 121-.
*/

#include <iostream>

int reverse(int num) {
    int result = 0;
    while(num != 0){
        result = result * 10 + (num % 10);
        num /= 10;
    }

    return result;
}

bool isPalindrome(int num) {
    if(num < 0) {
        return false;
    }
    return num == reverse(num);
}

int main() {
    int n = 1221;
    std::cout << n << " isPalindrome: " << std::boolalpha << isPalindrome(n) << std::endl;

    n = 0;
    std::cout << n << " isPalindrome: " << std::boolalpha << isPalindrome(n) << std::endl;

    n = 1001;
    std::cout << n << " isPalindrome: " << std::boolalpha << isPalindrome(n) << std::endl;

    n = 120;
    std::cout << n << " isPalindrome: " << std::boolalpha << isPalindrome(n) << std::endl;

    n = -121;
    std::cout << n << " isPalindrome: " << std::boolalpha << isPalindrome(n) << std::endl;
}