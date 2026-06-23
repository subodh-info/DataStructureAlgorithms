/*
Given an array arr[] of n integers and a target value, find the number of pairs of integers in the array whose sum is equal to target.

Examples:  
Input: arr[] = [1, 5, 7, -1, 5], target = 6
Output:  3
Explanation: Pairs with sum 6 are (1, 5), (7, -1) & (1, 5).         

Input: arr[] = [1, 1, 1, 1], target = 2
Output:  6
Explanation: Pairs with sum 2 are (1, 1), (1, 1), (1, 1), (1, 1), (1, 1) and (1, 1).

Input: arr[] = [10, 12, 10, 15, -1], target = 125
Output:  0
Explanation: There is no pair with sum = target
*/

#include <iostream>
#include <unordered_map>
#include <vector>

int twoSumCount(std::vector<int> &arr, int target) {
    int count = 0;
    std::unordered_map<int, int> freq; // value -> frequence

    for(int i = 0; i < arr.size(); ++i) {
        int complement = target - arr[i];

        // check if complement exist into the map 
        // if yes, then increase the count
        if(freq.find(complement) != freq.end()) {
            count += freq[complement];
        }

        // increase the frequency
        freq[arr[i]]++;
    }

    return count;

}

int main() {
    std::vector<int> v = {1, 5, 7, -1, 5};
    std::cout << "Result: " << twoSumCount(v, 6);
    return 0;
}