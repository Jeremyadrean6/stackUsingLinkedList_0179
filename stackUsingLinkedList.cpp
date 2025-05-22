#include <iostream>

using namespace std;

// Node class representing a single node int the linked list
class Node {
    public:
    int data;
    Node* next;

    Node(){
        next = NULL;
    }
};

// Stack class
class Stack {
    private:
    Node* top; // Pointer to the top node pf the stack 

    public:
    Stack() {
        top = NULL; // Initialize the stuck with a null top pointer
    }
    
    // push operation: insert an elemnt onto the top of the stack
    int push(int value) {
        Node* newNode = new Node(); // 1. Allocate memory for the new node
        newNode->data = value; // 2. Assign value 
        newNode->next = top; // 3. set the next pointer of the new node to the current top
        top = newNode; // 4. Update the top pointer to the new node
        cout << "push value: "<< value << endl;
        return value;
    }

    // Pop operation: Remove the topmost element from the stack
    void pop() {
        if (isEmpty()) {
            cout << "stack is empty." << endl;
        }

    }
};