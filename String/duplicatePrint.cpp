/*
Given a string s, the task is to identify all characters that appear more than once and print each as a list containing the character and its count.

Examples:
Input: s = "geeksforgeeks"
Output: ['e', 4], ['g', 2], ['k', 2], ['s', 2]
Explanation: Characters e, g, k, and s appear more than once. Their counts are shown in order of first occurrence.

Input: s = "programming"
Output: ['r', 2], ['g', 2], ['m', 2]
Explanation: Only r, g, and m are duplicates. Output lists them with their counts.

Input: s = "mississippi"
Output: ['i', 4], ['s', 4], ['p', 2]
Explanation: Characters i, s, and p have multiple occurrences. The output reflects that with count and order preserved.
*/

#include <iostream>
#include <string>
#include <unordered_map>

void printDuplicate(std::string &s) {
    std::unordered_map<char, int> freqMap;

    for(char c : s) {
        freqMap[c]++;
    }

    for(auto it : freqMap) {
        if(it.second > 1) {
            std::cout << "['" << it.first << "', " << it.second << "], ";
        }
    }
}

int main() {
    std::string s = "geeksforgeeks";
    printDuplicate(s);
    std::cout << std::endl;

    s = "programming";
    printDuplicate(s);
    std::cout << std::endl;

    s = "mississippi";
    printDuplicate(s);
    std::cout << std::endl;
}