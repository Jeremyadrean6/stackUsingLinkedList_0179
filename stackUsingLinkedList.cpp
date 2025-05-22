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
class stack {
    private:
    Node* top; // Pointer to the top node pf the stack 

    public:
    stack() {
        top = NULL; // Initialize the stuck with a null top pointer
    }
    
   
};