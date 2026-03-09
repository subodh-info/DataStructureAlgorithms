/* A program to calculate factorial of integer. 
NOTE:- factorial of negative number can not be calculated. 
Because, factorial function (n!) is defined as the product of all 
positive integers from 1 to n. 
*/

#include <iostream>
#include <numeric>

long factorial(int num) {
    long fact = 1;

    if(num < 0) {
        std::cout << "Factorial can not be computed for " << num << std::endl;
        return INT_MAX;
    }

    if(num == 0) {
        return fact;
    }
    for(int i = 1; i <= num; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n = 0;
    std::cout << "factorial of " << n << ": " << factorial(n) << std::endl;

    n = 5;
    std::cout << "factorial of " << n << ": " << factorial(n) << std::endl;

    n = -5;
    std::cout << "factorial of " << n << ": " << factorial(n) << std::endl;
}
