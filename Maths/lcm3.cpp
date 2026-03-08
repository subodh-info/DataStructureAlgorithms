/* A program to calculate LCM of three integer. */

#include <iostream>
#include <cmath>

int lcm2num(int a, int b) {
    if(a == 0 || b == 0) {
        return 0;
    }

    a = std::abs(a);
    b = std::abs(b);

    int g = std::max(a, b);
    int s = std::min(a, b);

    for(int i = g; i <= s*g;i+=g){
        if(i%s == 0) {
            return i;
        }
    }
}

int lcm3num(int a, int b, int c) {
    return lcm2num(lcm2num(a, b), c);
}

int main() {
    int a = 4, b = 6, c = 8;
    std::cout << "LCM of " << a << ", " << b << ", " << c << ": " << lcm3num(a, b, c) << std::endl;
}