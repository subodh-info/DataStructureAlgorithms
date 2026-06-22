/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]
*/

/*
We can solve this problem with the help of Brute force approach, but in this case 
time complexity will be O(n^2).

Hence, the better way is to solve this with the halp of Hashmap. In this case 
time complexity will be O(n)
Space complexity will be O(n)

*/

#include <iostream>
#include <unordered_map>
#include <vector>

std::vector<int> twoSum(std::vector<int> &nums, int target) {
    std::unordered_map<int, int> mp; // value -> index

    for(int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];

        if(mp.find(complement) != mp.end()) {
            return {mp[complement], i};
        }

        mp[nums[i]] = i;
    }

    return {};
}

int main() {
    std::vector<int> v = {3,2,4}; //{2,7,11,15};
    std::vector<int> res = twoSum(v, 6);
    
    // display result
    std::cout << "[";
    for(int e : res) {
        std::cout << e << ",";
    }
    std::cout << "]" << std::endl;
}