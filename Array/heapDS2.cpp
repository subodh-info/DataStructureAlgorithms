/*
This program contains the implementation of priority_queue using heap data structure.
*/

#include <iostream>
#include <vector>
#include <string>

struct Node {
    std::string task;
    int priority;
    Node(std::string _task, int _priority) {
        task = _task;
        priority = _priority;
    }
};

class PriorityQueue {
    std::vector<Node> heap;

    void heapify(int _index) {
        int largest = _index;
        int _size = heap.size();

        while(_index < _size) {
            int left = 2 * _index + 1;
            int right = 2 * _index + 2;

            if(left < _size && heap[left].priority > heap[largest].priority) {
                largest = left;
            }

            if(right < _size && heap[right].priority > heap[largest].priority) {
                largest = right;
            }

            if(largest != _index) {
                std::swap(heap[_index], heap[largest]);
                _index = largest;
            }
            else {
                break;
            }
        }
    }

    public:
    void insert(std::string _task, int _priority) {
        heap.push_back(Node(_task, _priority));
        int _index = heap.size() - 1;
        while(_index != 0) {
            int _parent = (_index - 1)/ 2;
            if(heap[_parent].priority < heap[_index].priority) {
                std::swap(heap[_parent], heap[_index]);
                _index = _parent;
            }
            else {
                break;
            }
        }
    }

    Node top() {
        if(heap.empty()) {
            throw std::runtime_error("There is no element into queue");
        }
        return heap.front();
    }

    void extractMax() {
        if(heap.empty()) {
            throw std::runtime_error("There is no element in the queue.....");
            return;
        }

        // step-1: swap first and last element
        std::swap(heap.front(), heap.back());

        // step-2: remove last element
        heap.pop_back();

        // step-3: heapify first element
        heapify(0);
    } 
    
    void display() {
        for(Node item : heap) {
            std::cout << item.task << "-----------" << item.priority << std::endl;
        }
    }
};

int main() {
    PriorityQueue pq;
    pq.insert("Memory Management", 4);
    pq.insert("Multithreading and concurrency Programming", 10);
    pq.insert("Template meta programming", 3);
    pq.insert("Object Oritented programming", 5);
    pq.insert("Manipulator", 1);
    pq.display();

    Node _top = pq.top();
    std::cout << "On Highest priority: \n";
    std::cout << _top.task << " <-----> " << _top.priority << std::endl;

    pq.extractMax();
    std::cout << "\nAfter delete the highest priority element => \n";
    pq.display();

    _top = pq.top();
    std::cout << "\nOn Highest priority: \n";
    std::cout << _top.task << " <-----> " << _top.priority << std::endl;
    return 0;
}
