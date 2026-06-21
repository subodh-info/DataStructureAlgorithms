/*
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

Example 1:
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
*/

#include <iostream>
#include <vector>
#include <algorithm>

void rotateRight(std::vector<int> &nums, int k) {
    k = k%nums.size();
    std::reverse(nums.end() - k, nums.end());
    std::reverse(nums.begin(), nums.end() - k);
    std::reverse(nums.begin(), nums.end());
}

void rotateLeft(std::vector<int> &nums, int k) {
    k = k%nums.size();
    std::reverse(nums.begin(), nums.begin() + k);
    std::reverse(nums.begin() + k, nums.end());
    std::reverse(nums.begin(), nums.end());
}

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    rotateRight(v, k);
    // rotateLeft(v, k);

    // display result
    for(int e : v) {
        std::cout << e << " ";
    }
    std::cout << std::endl;
}