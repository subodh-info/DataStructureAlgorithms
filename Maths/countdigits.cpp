#include <iostream>

int countDigits(int n) {
    int count = 0;
    if(n == 0) {
        return 1;
    }

    if(n < 0) {
        n = -n;
    }

    while (n > 0) {
        n = n/10;
        count++;
    }

    return count;
}

int main() {
    int n = 345670;
    std::cout << "total digits: " << countDigits(n) << std::endl;
}