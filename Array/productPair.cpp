/*
Given an integer array arr[] and an integer target, determine whether there exists a pair of elements in the array whose product is equal to target.

Return true if such a pair exists; otherwise, return false.

Examples : 
Input: arr[] = [10, 20, 9, 40], target = 400
Output: true
Explanation: As 10 * 40 = 400, the answer is true.

Input: arr[] = [-10, 20, 9, -40], target = 30
Output: false
Explanation: No pair exists with product 30.
*/

#include <iostream>
#include <unordered_set>
#include <vector>

bool productPair(std::vector<int> &arr, int target) {
    std::unordered_set<int> st;
    
    for(int num : arr) {
        if(target % num == 0) {
            int complement = target/num;
            if(st.find(complement) != st.end()) {
                return true;
            }

            st.insert(num);
        }
    }
    return false;
}

int main() {
    std::vector<int> arr = {10, 20, 9, 40};
    long long target = 400;

    if (productPair(arr, target))
        std::cout << "true";
    else
        std::cout << "false";
}