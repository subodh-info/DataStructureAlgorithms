/* program to demonstrate the use of two pointers*/

#include <iostream>
#include <vector>

bool twoSum(std::vector<int> &arr, int target) {
    int left = 0, right = arr.size() - 1;
    while(left < right) {
        int sum = arr[left] + arr[right];
        if(sum == target) {
            return true;
        }
        else if (sum < target) { // move toward higher sum
            left++;
        }
        else { // move toward a lower sum
            right--;
        }
    }
    return false; // if no pair found
}

int main() {
    std::vector<int> arr = {-3, -1, 0, 1, 2};
    int target = -2;
    if(twoSum(arr, target)) {
        std::cout << "true";
    }
    else {
        std::cout << "false";
    }
    return 0;
}