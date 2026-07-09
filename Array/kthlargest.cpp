/*
this program contains the logic to find the kth largest element using heap data structure from unsorted array.
*/

#include <iostream>
#include <vector>
#include <queue>

int kthLargestElement(std::vector<int> &arr, int k) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

    for(int num : arr) {
        minHeap.push(num);

        if(minHeap.size() > k) {
            minHeap.pop();
        }
    }

    return minHeap.top();
}

int main() {
    std::vector<int> arr = {3, 2, 1, 5, 6, 4};
    int k = 2;

    std::cout << k <<"th largest => " << kthLargestElement(arr, k) << std::endl;
}

