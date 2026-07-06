/*
This program contains Heap Data Structure implementation using array.
*/

#include <iostream>
#include <vector>

class MaxHeap {
    std::vector<int> heap;

    void heapifyup(int _index) {
        while(_index > 0) {
            int _parent = (_index - 1)/2;
            if(heap[_parent] < heap[_index]) {
                std::swap(heap[_parent], heap[_index]);
                _index = _parent;
            }
            else {
                break;
            }
        }
    }

    void heapifydown(int index) {
        if(heap.empty()) {
            throw std::runtime_error("Heap is empty");
        }
        int size = heap.size();
        while(index < size) {
           int left = 2 * index + 1;
           int right = 2 * index + 2;
           int largest = index;

           if(left < size && heap[left] > heap[index]) {
                largest = left;
           }

           if(right < size && heap[right] > heap[index]) {
                largest = right;
           }

           if(largest == index) break;

           std::swap(heap[index], heap[largest]);
           index = largest;
        }
    }

    public:
    void insert(int _value) {
        heap.push_back(_value);
        int _index = heap.size() - 1;
        heapifyup(_index);
    }

    // return top element of heap data structure
    int top() {
        if(heap.empty()) {
            throw std::runtime_error("Heap is empty");
        }
        return heap.front();
    }

    // delete top element of heap data structure
    void remove() {
        if(heap.empty()) {
            throw std::runtime_error("Heap is empty....");
        }
        std::swap(heap.front(), heap.back());
        heap.pop_back();
        heapifydown(0);
    }

    // print all element of heap data structure
    void display(){
        for(int i : heap) {
            std::cout << i << ", ";
        }
        std::cout << std::endl;
    }
};

int main() {
    MaxHeap maxheap;
    maxheap.insert(10);
    maxheap.insert(20);
    maxheap.insert(5);
    maxheap.insert(30);

    // print heap data structure
    maxheap.display();
    std::cout << "top element: " << maxheap.top() << std::endl;

    // remove top element
    maxheap.remove();

    std::cout << "\nAfter removing top element => \n";
    maxheap.display();
}