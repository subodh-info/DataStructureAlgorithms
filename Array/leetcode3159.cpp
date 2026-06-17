/*
This program contains the logic to find occurences of an element in an array. 

You are given an integer array nums, an integer array queries, and an integer x.
For each queries[i], you need to find the index of the queries[i]th occurrence of x in the nums array. If there are fewer than queries[i] occurrences of x, the answer should be -1 for that query.

Return an integer array answer containing the answers to all queries.

Example 1:
Input: nums = [1,3,1,7], queries = [1,3,2,4], x = 1

Output: [0,-1,2,-1]

Explanation:
For the 1st query, the first occurrence of 1 is at index 0.
For the 2nd query, there are only two occurrences of 1 in nums, so the answer is -1.
For the 3rd query, the second occurrence of 1 is at index 2.
For the 4th query, there are only two occurrences of 1 in nums, so the answer is -1.


leetcode -> https://leetcode.com/problems/find-occurrences-of-an-element-in-an-array/description/

We can solve this program using brute-force approach but in this case - for each query we will scan entire array and count occurences.
This is not best approach because in this case the time-complexity will be O(n*q).

Instead of brute-force approach we follow another approach - 
1. Traverse entire array once
2. store the indices where num[i] == x into another array

*/

// There is another version of this problem - to find the occurences of multiple values. For example, in the above problem statement there is an integer x is given to find the occurrences
// according to queries. Similarly in advace case (another version of above problem), there are more than one integers are given to find the occurrences based on the queries. 
// To solve such kind of problems - map data structure (unorder or map) is highly recommended to use.

// But for the our current problem-statement, there is no need to use map, we can but it is not good approach.

#include <iostream>
#include <vector>

std::vector<int> occurrencesOfElement(std::vector<int>& nums, std::vector<int>& queries, int x) {
    std::vector<int> positions, result;

    for(int i = 0; i < nums.size(); ++i) {
        if(nums[i] == x) {
            positions.push_back(i);
        }
    }

    for(int k : queries) {
        if(k <= positions.size()) {
            result.push_back(positions[k-1]);
        }
        else {
            result.push_back(-1);
        }
    }

    return result;
}

int main() {
    // std::vector<int> nums = {1, 2, 1, 7}, queris = {1, 3, 2, 4};
    // int x = 1;

    std::vector<int> nums = {1, 2, 3}, queris = {10};
    int x = 5;

    std::vector<int> res = occurrencesOfElement(nums, queris, x);
    for(int r : res) {
        std::cout << r << std::endl;
    }
}