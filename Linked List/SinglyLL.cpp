#include<iostream>
#include<math.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //Constructor 
    Node(int data){
        this->data = data;
        this-> next = NULL;
    }

    //Destructor
    ~Node (){
        int value = this->data;
        if(this->next !=NULL){
            delete next;
            this->next = NULL;

        }
    }
};

void InsertAtHead(Node* &head , int d){

    Node * temp = new Node(d);
    temp ->next = head;
    head = temp; 
}

void InsertAtTail(Node* &tail , int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}


void insertAtPositin(Node* &tail , Node* &head , int pos , int d){

    // inserting at 1st position
    if(pos == 1){
        InsertAtHead(head,d);
        return ;
    }

    Node * temp = head;

    int cnt =1;
    while(cnt<(pos-1)){
        temp = temp->next;
        cnt++;
    }

    // Insert At Tail
    if(temp->next == NULL){
        InsertAtTail(tail , d);
        return ;
    }

    Node* nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next ;
    temp->next = nodetoinsert;
}


// delete at some position
void deletionatpos(Node* &head ,Node* &tail, int pos ){

    if(pos==1){
        Node* temp = head;
        head = head->next;

        temp->next = NULL;
        delete temp;

    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;

        while(cnt < pos){
            prev = curr;
            curr  = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        if(prev->next == NULL){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

void deletethedata(Node* &head ,Node* &tail, int data){
    if(data==head->data){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* curr = head ;
        Node* prev = NULL;

        while(curr->data != data){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        if(prev->next == NULL){
            tail = prev;
        }
            curr->next = NULL;
            delete curr;
    }
}

void print(Node * &head){
    Node *temp = head;
    while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
    }

}

int main(){
    
    //Created a new node
    Node* node1 = new Node(12);
    cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    //insertion at head
    Node* head = node1;
    Node *tail = node1; 

    InsertAtHead(head , 10);
    print(head);

    cout<<endl;

    InsertAtTail(tail , 20);
    print(head);

    cout<<endl;

    insertAtPositin(tail ,head , 3 , 15);
    insertAtPositin(tail ,head , 1 , 5);
    insertAtPositin(tail ,head , 6 , 25);
    print(head);
    cout<<endl;   
    
    deletionatpos(head, tail , 6);
    deletethedata(head, tail , 20 );
    print(head);

        cout <<endl;
    cout<<"Head->"<<head->data<<endl;
    cout<<"Tail->"<<tail->data<<endl;


    return 0;
}