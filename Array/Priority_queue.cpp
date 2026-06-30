/*
As we know that priority_queue is a special type of queue that stores the information based on the priority. 
In this type of queue elements are arranges either ascending order or descending order based on the priority. 

The intention of this program is to implement the priority_queue using array. And at the top highest priority element will resides. 
*/

#include <iostream>

struct Queue {
    int value, priority;
};
Queue queue[5];
int size = -1;

void enqueue(int value, int priority) {
    if(size < 4) {
        size++;
        queue[size].priority = priority;
        queue[size].value = value;
    }
    else {
        std::cout << "There is no space in queue to store values...\n";
    }
}

// get the top element
int peek() {
    int highestPriority = INT_MIN;
    int ind = -1;
    if(size == -1) {
        std::cout << "Queue is empty.....\n";
        return -1;
    }
    else {
        for(int i = 0; i <= size; ++i) {
            if(highestPriority < queue[i].priority) {
                highestPriority = queue[i].priority;
                ind = i;
            }
            else if (highestPriority == queue[i].priority && ind > -1 && queue[ind].value < queue[i].value) {
                highestPriority = queue[i].priority;
                ind = i;
            }
        }
        
    }
    return ind;
}

// display
void display() {
    if(size == -1) {
        std::cout << "Queue is empty\n";
    }
    else {
        for(int i = 0; i <=size; ++i) {
            std::cout << queue[i].priority << "<------> " << queue[i].value << std::endl;
        }
    }
}

// function to remove the element of highest priority
void dequeue() {
    int ind = peek();

    // shift the one index before 
    // from the position of the 
    // top element is found
    for(int i = ind; i <= size; ++i) {
        queue[i] = queue[i + 1];
    }
    size--;
}

int main() {
    enqueue(10, 2);
    enqueue(14, 4);
    enqueue(16, 4);
    enqueue(12, 3);
    enqueue(20, 4);
    enqueue(25, 4);

    display();

    Queue high = queue[peek()];
    std::cout << "Highest priority element => " << high.priority << "<----->" <<  high.value << std::endl;

    // delete the higest priority element
    dequeue();

    // display queue
    display();

    high = queue[peek()];
    std::cout << "Highest priority element => " << high.priority << "<----->" <<  high.value << std::endl;


}