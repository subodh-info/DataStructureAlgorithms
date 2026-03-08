#include <iostream>
#include <cmath>

int lcm(int a, int b) {
    if(a == 0 || b == 0) {
        return 0;
    }

    a = std::abs(a);
    b = std::abs(b);

    int g = std::max(a, b);
    int s = std::min(a, b);

    // here, if a = 99991; b = 99989 then s*g goes out of int limitation
    // in this case, we can use long long int
    for(int i = g; i <= s*g; i+=g) {
        if(i%s == 0){
            return i;
        }
    }
}

int main() {
    int a = 18, b = 48;
    std::cout << "LCMD of " << a << " and " << b << ": " << lcm(a, b) << std::endl;

    a = 10; b = 5;
    std::cout << "LCMD of " << a << " and " << b << ": " << lcm(a, b) << std::endl;
}