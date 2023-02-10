#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data){

        this->data = data;
        this->next = NULL;
    }

};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}


void insertAtPosition(Node* &tail, Node* & head, int position, int d) {


    //insert at Start
    if(position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}

void print(Node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}


int main()
{
    Node* node1 = new Node(10);
    Node* tail = node1;
    Node* head = node1;//NULL -> go on if condition

    cout<< node1->data << endl;

    insertAtHead(head,14);
    insertAtHead(head,20);
    insertAtHead(head,28);

    

    print(head);

    insertAtPosition(tail,head,5,101);

    print(head);

    return 0;
}