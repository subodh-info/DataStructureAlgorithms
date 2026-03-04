/* A program to calculate LCM of two integer using LCM formula. 
    LCM(a, b) = (|axb|)/gcd(a, b)
*/

#include<iostream>
#include <cmath>
#include <numeric>

int lcm(int a, int b) {
    return std::abs(a * b)/std::gcd(a,b);
}

int lcm_stl(int a, int b) {
    return std::lcm(a, b); // Here, std::lcm() is built-in function present from c++ 17 onwards.
}

int main() {
    // int a = 18, b = 48;
    // std::cout << "LCM of " << a << " and " << b << " : " << lcm(a, b) << std::endl;

    // a = 5; b = 10;
    // std::cout << "LCM of " << a << " and " << b << " : " << lcm(a, b) << std::endl;

    int a = 18, b = 48;
    std::cout << "LCM of " << a << " and " << b << " : " << lcm_stl(a, b) << std::endl;


    a = 5; b = 10;
    std::cout << "LCM of " << a << " and " << b << " : " << lcm_stl(a, b) << std::endl;

}