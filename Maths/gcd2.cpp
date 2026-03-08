/* A program to calculate gcd of three integer. */

#include <iostream>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int gcd_of_three(int a, int b, int c) {
    return gcd(gcd(a, b), c);
}

int main() {
    int n1 = 48, n2 = 18, n3 = 30;
    std::cout << "GCD of " << n1 << ", " << n2 << " and " << n3 << " is: "
              << gcd_of_three(n1, n2, n3) << std::endl;
}