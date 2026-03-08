#include <iostream>
#include <cmath>
#include <vector>

int gcd(int a, int b) {
    while(b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int lcm(int a, int b) {
    return (a/gcd(a, b) *b); // according to LCM formula
}

int lcmArray(std::vector<int> arr) {
    if(arr.empty()) {
        return 0;
    }

    if(arr.size() < 2) {
        return arr[0];
    }

    int result = arr[0];
    for(int i = 1; i < arr.size(); i++) {
        result = lcm(result, arr[i]);
        if(result == 0) { // early termination
            return 0; 
        }
    }

    return result;
}

int main() {
    std::vector<int> arr = {4, 6, 8, 3};
    std::cout << "LCM: " << lcmArray(arr) << std::endl;
}