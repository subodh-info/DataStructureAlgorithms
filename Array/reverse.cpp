/* A program to reverse an array. */

#include <iostream>
#include <vector>

void reverseArray(std::vector<int> &arr) {
    int left = 0, right = arr.size()-1;
    while(left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        
        left++; right--;
    }
}

void print(std::vector<int> &arr) {
    for(int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
}
int main() {
    std::vector<int> v = {1, 4, 3, 2, 6, 5};
    std::cout << "Before => \n";
    print(v);
    reverseArray(v);
    std::cout << "\nAfter => \n";
    print(v);

}