#include <iostream>
using namespace std;
struct Node {
    int value; 
    int priority; 
    Node* prev;
    Node* next;
    Node(int val, int pri) : value(val), priority(pri), prev(nullptr), next(nullptr) {}
};
class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}
    void enqueue(int value, int priority) {
        Node* newNode = new Node(value, priority);
        if (tail == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        printList();
    }
    void dequeue() {
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head == nullptr) {
            tail = nullptr;
        } else {
            head->prev = nullptr;
        }
        delete temp;
        printList();
    }
    void printList() {
        Node* current = head;
        if (current == nullptr) {
            cout << endl;
            return;
        }
        while (current != nullptr) {
            cout << "(" << current->value << ", " << current->priority << ")";
            if (current->next != nullptr) cout << "; ";
            current = current->next;
        }
        cout << endl;
    }
    ~DoublyLinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }
};
int main() {
    DoublyLinkedList queue;
    int n;
    cin >> n; 
    for (int i = 0; i < n; i++) {
        string command;
        cin >> command;
        if (command == "enqueue") {
            int value, priority;
            cin >> value >> priority;
            queue.enqueue(value, priority);
        } else if (command == "dequeue") {
            queue.dequeue();
        }
    }

    return 0;
}