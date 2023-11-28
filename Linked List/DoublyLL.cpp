#include<iostream>
#include<math.h>
using namespace std;

class Node {
    public:
    int data;
    Node* prev ;
    Node* next ;

    //Constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    //Destructor
    ~Node(){
        int val = this->data;
        if(next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory free at value->"<<val<<endl;
    }

};

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getlength(Node* &head){
    Node* temp = head;
    int len = 0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void insertAtHead(Node* &head , int d){
    Node * temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node* &tail , int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    
}

void insertAtPosition(Node* &head,Node* &tail , int pos , int d){

    if(pos==1){
        insertAtHead(head,d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < pos-1){
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }

    Node* nodetoinsert = new Node(d);

    temp->next->prev = nodetoinsert;
    nodetoinsert->next = temp->next;
    nodetoinsert->prev = temp;
    temp->next = nodetoinsert;
}

void deletenode(int pos , Node* &head , Node* &tail){

    if(pos==1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else{
    Node* curr = head;
    Node* prev = NULL;
    int cnt = 1;
    while(cnt < pos){
        prev = curr;
        curr=curr->next;
        cnt++;
    }
    
    curr->prev = NULL;
    prev->next = curr->next;
    curr->next = NULL;

    if(prev->next == NULL){
        tail = prev;
    }

    delete curr;
    }
    
}

int main(){

    Node* node1 = new Node(10);
    Node* head =  node1;
    Node* tail = node1;

    cout<< getlength(head) << endl;

    print(head);
    
    insertAtHead(head , 12);
    print(head);

    insertAtHead(head , 14);
    print(head);

    insertAtHead(head , 16);
    print(head);

    insertAtHead(head , 18);
    print(head);

    insertAtTail(tail , 8);
    print(head);

    insertAtTail(tail , 6);
    print(head);

    cout<<endl;

    insertAtPosition(head , tail , 1 , 20);
    print(head);

    insertAtPosition(head , tail , 4 , 15);
    print(head);

    insertAtPosition(head , tail , 6 , 13);
    print(head);

    insertAtPosition(head , tail , 11 , 4);
    print(head);
    
    cout<<"Deletion Start"<<endl;

    deletenode(1 , head , tail);
    print(head);

    deletenode(10 , head , tail);
    print(head);

    deletenode(3 , head , tail);
    print(head);

    deletenode(4 , head , tail);
    print(head);

    cout<<"Head->"<<head->data <<endl;
    cout<<"Tail->"<<tail->data <<endl;

    

    return 0;
}