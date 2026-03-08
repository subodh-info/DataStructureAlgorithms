/* A program to calculate the GCD of two integer. */

#include <iostream>
#include <numeric>
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


// calculate gcd using STL
int gcd_stl(int a, int b) {
    return std::gcd(a, b); // Here, std::gcd is a function from the <numeric> header 
    // that computes the greatest common divisor of two integers.
    // It is available in C++17 and later versions. 
    // Internally it uses the Euclidean algorithm, which is efficient for computing the GCD.
}
int main(){
    int a = 18, b = 48;
    std::cout << "The GCD of " << a << " and " << b << " is: " << gcd(a, b) << std::endl;

    std::cout << "The GCD of " << a << " and " << b << " using recursion is: " << gcd_recursive(a, b) << std::endl;

    std::cout << "The GCD of " << a << " and " << b << " using STL is: " << gcd_stl(a, b) << std::endl;
}

// NOTE:- gcd(a, b) = gcd(b, a);

