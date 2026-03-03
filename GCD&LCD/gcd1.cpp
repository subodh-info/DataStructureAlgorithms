/* A program to calculate the GCD of two integer. */

#include <iostream>
#include <algorithm>

int gcd(int a, int b) {
    while(b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

// calculate gcd using recursion
int gcd_recursive(int a, int b) {
    if (b == 0)
        return a;
    return gcd_recursive(b, a % b);
}

int main(){
    int a = 18, b = 48;
    std::cout << "The GCD of " << a << " and " << b << " is: " << gcd(a, b) << std::endl;

    std::cout << "The GCD of " << a << " and " << b << " using recursion is: " << gcd_recursive(a, b) << std::endl;
}

// NOTE:- gcd(a, b) = gcd(b, a);

