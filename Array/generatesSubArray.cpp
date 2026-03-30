/* Given an array arr[], the task is to generate all the possible subarray of the given array.
Examples:
Input: arr[] = [1, 2, 3]
output: [[1], [1, 2], [2], [1, 2, 3], [2, 3], [3]]

Input: arr[] = [1, 2]
output: [[1], [1, 2], [2]]
*/

#include <iostream>
#include <vector>

using namespace std;

void printSubArray(const vector<int> &arr, int start, int end) {
    if(end == arr.size()) {
        return;
    }
    else if(start > end) {
        printSubArray(arr, 0, end + 1);
    }
    else {
        for(int i = start; i <= end; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        printSubArray(arr, start+1, end);
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    printSubArray(arr, 0, 0);

}
