#include <iostream>
#include <vector>

void heapify(std::vector<int> &heap, int size, int i) {
    if(heap.empty()) {
        throw std::runtime_error("There is no element into heap....");
        return;
    }

    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if(left < size && heap[left] > heap[largest]) {
        largest = left;
    }

    if(right < size && heap[right] > heap[largest]) {
        largest = right;
    }

    if(largest != i) {
        std::swap(heap[largest], heap[i]);
        heapify(heap, size, largest);
    }
}

void heapsort(std::vector<int> &heap) {
    int size = heap.size();

    // step-1: Build max heap
    for(int i = size/2;  i >= 0; --i) {
        heapify(heap, size, i);
    }

    // step-2: Extract one by one element
    for(int i = size - 1; i > 0; --i) {
        // swap first element to the last element
        std::swap(heap[0], heap[i]);
        
        // now, heapify again 
        heapify(heap, i, 0);
    }
}

int main() {
    std::vector<int> arr = {4, 10, 3, 5, 1};

    heapsort(arr);

    for(int item : arr) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
    return 0;
}