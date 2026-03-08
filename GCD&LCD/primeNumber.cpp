/* Program to check input integer is prime or not
NOTE:- Negative number can not be prime. According to mathematics definitions
"Prime numbers are natural number (positive integer) greater than 1 that have exactly two distinct
positive divisors: 1 and themselves. 
"
*/
#include <iostream>
#include <cmath>

bool isPrime(int num) {
    if(num < 0) {
        return false;
    }
    bool status = true;
    for(int i = 2; i<= std::sqrt(num); i++) {
        if(num % i == 0) {
            status = false;
            break;
        }
    }
    return status;
}

int main() {
    int num = 17;
    std::cout << num << " is prime: " << std::boolalpha << isPrime(num) << std::endl;
    num = 18;
    std::cout << num << " is prime: " << std::boolalpha << isPrime(num) << std::endl;
}