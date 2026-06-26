/*
Given an integer array arr[] and an integer k, find and return the kth smallest element in the given array.
Note: The kth smallest element is determined based on the sorted order of the array

Examples :
Input: arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output: 5
Explanation: 4th smallest element in the given array is 5.

Input: arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output: 7
Explanation: 3rd smallest element in the given array is 7.
*/

/*
There are 3 ways to solve this problem - 
1) sort array in ascending order and print the (k-1)th element -> In this case time complexity will be O(n*logn). In the case of duplicate value, simply printing (k-1)th element is not workable.
2) using brute force approach -> In this case time complexity will be O(n * k)
3) using max-heap -> In this case the time complexity will be O(n*logk). This is the best approach to solve such kind of problem.

Apart from these there are some other approach to solve this problem:-
1) QuickSelection algorithm -> In this case the time complexity becomes O(n^2) which is not good approach for this problem.
2) Counting sort -> In this case time complexity becomes O(n + maxElement) which is also not good approach for this problem.
*/

/*
Here, I'm trying to solve this problem using brute force approach but later I'll modify this and solve using max-heap. I'm not solving by sorting because, it is very simple and the main purpose 
right now is to learn hence I'm skipping sorting approach.
*/

#include <iostream>
#include <vector>

int kthSmallest(std::vector<int>& arr, int k) {
    int n = arr.size();
    int result = INT_MAX;

    for (int i = 0; i < k; i++) {
        int minIndex = -1;
        int minValue = INT_MAX;

        // Find minimum element in array
        for (int j = 0; j < n; j++) {
            if (arr[j] < minValue) {
                minValue = arr[j];
                minIndex = j;
            }
        }

        // Store result and mark this element as used
        result = minValue;
        arr[minIndex] = INT_MAX; // mark as visited
    }

    return result;
}

int main() {
    std::vector<int> arr = {10, 5, 4, 3, 48, 6, 2, 33, 53, 10};// {7, 10, 4, 3, 20, 15};
    int k = 4; // 3;

    std::cout << "Kth smallest element is: " << kthSmallest(arr, k);
    return 0;
}