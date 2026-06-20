/*
Given a sorted array arr[] of size n, the goal is to rearrange the array so that all distinct elements appear at the beginning in sorted order.
Additionally, return the length of this distinct sorted subarray.
The relative order of the elements should be kept the same.

Examples: 
Input: arr[] = [2, 2, 2, 2, 2]
Output: [2]
Explanation: All the elements are 2, So only keep one instance of 2.

Input: arr[] = [1, 2, 2, 3, 4, 4, 4, 5, 5]
Output: [1, 2, 3, 4, 5]

Input: arr[] = [1, 2, 3]
Output: [1, 2, 3]
Explanation : No change as all elements are distinct.
*/

#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int> &arr) {
    int j = 0;
    for(int i = 1; i < arr.size(); ++i) {
        if(arr[j] != arr[i]) {
            arr[++j] = arr[i];
        }
    }
    return j+1;
}

int main() {
    std::vector<int> v = {1, 2, 2, 3, 3, 4, 4, 4, 5, 5};
    std::cout << removeDuplicates(v) << std::endl;
}