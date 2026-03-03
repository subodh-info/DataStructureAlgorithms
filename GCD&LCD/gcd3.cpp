/* A program to calculate gcd of an array of integers. 

Previously, we have seen how to calculate the GCD of three integers using the GCD of two integers. 
To calculate the GCD of an array of integers, we can use a similar approach. 
We can start by calculating the GCD of the first two integers in the array, 
and then use that result to calculate the GCD with the next integer in the array, 
and so on until we have processed all integers in the array.
*/

#include <iostream>
#include <vector>

int GCD(int a, int b) {
    while(b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int GCDOfArray(std::vector<int> &arr) {
    int result = 0;
    if(arr.size() >0) {
        result = arr[0];

        for(int i = 1; i < arr.size(); ++i) {
            result = GCD(arr[i], result);
        }
    }

    return result;
    
}

int main() {
    std::vector<int> arr = {2, 4, 6, 8};
    std::cout << "GCD: " << GCDOfArray(arr) << std::endl;
}
