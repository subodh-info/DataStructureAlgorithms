/*
Given an integer array arr[], find the sum of any two elements whose sum is closest to zero.

Note: In case if we have two ways to form sum closest to zero, return the maximum sum among them.

Examples:
Input: arr[] = [-8, 5, 2, -6]
Output: -1
Explanation: The min absolute sum pair is (5, -6)

Input:  arr[] = [0, -8, -6, 3]
Output: 3
Explanation: We have a tie between (0, 3) and (-6, 3). We pick the max sum in this case which is 0+3

Input: arr[] = [-7, 4, 1, -2]
Output: -1
Explanation: The min absolute sum pair is (1, -2).
*/

#include <iostream>
#include <vector>
#include <algorithm>

int findClosestNumber(std::vector<int> &nums) {
    int left = 0, right = nums.size() - 1;
    
    std::sort(nums.begin(), nums.end());    
    
    
    int sum = 0;
    int diff = INT_MAX;

    while(left < right) {
        sum = nums[left] + nums[right];
        if(abs(sum) < abs(diff)) {
            diff = sum;
            sum = nums[left] + nums[right];
        }
        else if(abs(sum) == abs(diff)) {
            sum = std::max(sum, diff);
        }

        if(sum < 0) {
            left++;
        }
        else {
            right --;
        }

    }
    return sum;
}

int main() {
    std::vector<int> v = {-4,-2,1,4,8};
    std::cout << findClosestNumber(v) << std::endl;
}