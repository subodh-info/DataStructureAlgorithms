/*
This program implement the logic of priority_queue using linkedlist. This program arrange the element based on the priority. 
It means High priority element resides at the top.
*/

#include <iostream>

struct Node {
    int m_value, m_priority;
    Node *next = nullptr;

    Node(int _value, int _priority) {
        m_value = _value;
        m_priority = _priority;
        next = nullptr;
    }
};

class PriorityQueue {
    struct Node *head = nullptr; // this pointer keep the location of top (highest priority) element.

    public:
    bool isEmpty() {
        return (this->head == nullptr);
    }

    // insert element to the queue
    void enqueue(int _value, int _priority) {
        Node *nwnd = new Node(_value, _priority);

        if(this->head == nullptr || _priority > head->m_priority) {
            nwnd->next = head;
            head = nwnd;
        }
        else{
            Node *temp = head;
            while(temp->next != nullptr && temp->next->m_priority > _priority) {
                temp = temp->next;
            }
            nwnd->next = temp->next;
            temp->next = nwnd;
        }
    }

    // display elements
    void display() {
        if(!isEmpty()) {
            Node *temp = head;
            while(temp != nullptr) {
                std::cout << temp->m_priority << " <-----> " << temp->m_value << std::endl;
                temp = temp->next;
            }
            delete temp;
        }
    }

    // delte the top element
    void dequeue() {
        if(!isEmpty()) {
            Node *temp = head;
            head = temp->next;
            delete temp;
            temp = nullptr;
        }
    }

    // return top element
    Node* peek() {
        if(!isEmpty()) {
            return head;
        }
        else {
            return nullptr;
        }
    }

    ~PriorityQueue() {
        delete head;
    }
};

int main() {
    // create object of priority queue
    PriorityQueue pq;
    pq.enqueue(12, 7);
    pq.enqueue(15, 3);
    pq.enqueue(21, 8);
    pq.enqueue(17, 4);
    pq.enqueue(28, 2);
    pq.display();


    pq.dequeue(); // delete top element
    std::cout << "After deleting higest priority element => " << std::endl;
    pq.display();


    struct Node *peekElement = pq.peek();
    std::cout << std::endl << "peek element: " << peekElement->m_value << " with priority: " << peekElement->m_priority << std::endl;

    return EXIT_SUCCESS;

}


