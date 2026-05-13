#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node (int val){
        data = val;
        next = NULL;
    }
};

void printNodes(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main() {
    node* head = new node(10);
    node * second = new node(20);
    node * third = new node(30);
    node * fourth = new node(40);
     
    head -> next = second;
    second -> next = third;
    third -> next = fourth; 
    
    printNodes(head);
    
    return 0;
}