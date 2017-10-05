#include <iostream>
 
using namespace std;
 
class HeadNode {
    public:
 
    HeadNode() { headPtr = 0; tailPtr = 0; };
 
    class Node {
        public:
        Node(int val) { element = val; next = 0; };
        Node *next;
        int element;
    };
 
    void deleteNode(int deleteItem);
    void insertNode(int val);
    void traverseNode();
    Node *headPtr;
    Node *tailPtr;
 
};
 
class StackManager {
    public:
 
    class Node {
 
 
    };
 
    void insert(int val);
    int pop();
    void traverse();
 
    Node *headPtr;
 
};
 
 
void HeadNode::traverseNode() {
 
   
};
 
void HeadNode::deleteNode(int deleteItem) {
 
   
     
    Node *currPtr = headPtr;
    for ( currPtr = headPtr;  currPtr != 0; currPtr = currPtr->next) {
       
        if ( currPtr->element == deleteItem ) {
            if ( currPtr == headPtr) {
                               
                headPtr = headPtr->next;
                delete currPtr;
                cout << " Deleted the head element " << deleteItem << endl;
            } else if ( currPtr == tailPtr) {
                tailPtr = tailPtr->next;
                delete currPtr;
                cout << "Deleted the tail element" << deleteItem << endl;
                 
            } else {
                
                
 
            }
        }
 
    } 
 
};
 
void HeadNode::insertNode(int val) {
    
 
    if ( headPtr == 0 ) {
        headPtr = new Node(val);
        tailPtr = headPtr;
    } else {
      
    }
 
}
 
int main() {
     
    HeadNode *headNode = new HeadNode();
    for ( int i = 0; i < 10; i++ ) {
        headNode->insertNode(i);
 
    }
 
    
    headNode->deleteNode(0);
 
    
    headNode->deleteNode(9);
 
    
    headNode->deleteNode(3);
 
 
 
    
 
   
    for ( int i = 0; i < 10; i++ ) {
 
 
    }
 
	cout << headNode << endl;
     
 
}