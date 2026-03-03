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

int main(){
    int a = 18, b = 48;
    std::cout << "The GCD of " << a << " and " << b << " is: " << gcd(a, b) << std::endl;
}

// NOTE:- gcd(a, b) = gcd(b, a);

