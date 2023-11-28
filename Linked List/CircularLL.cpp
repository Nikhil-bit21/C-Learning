#include<iostream>
#include<math.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //Constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    //Destructor
    ~Node(){
        int value = this->data ;
        if(this->next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory Free for->"<<value<<endl;
    }
};

void insertNode(Node* &tail , int element , int d){
    
    //Empty List 
    if(tail==NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        // Non-empty List
        // Assuming that the element is present in the LL

        Node* curr = tail;

        while(curr->data != element){
            curr = curr->next;
        }

        // element Found & curr Node is at that node with data element

        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;

    }
}

void print(Node* tail){

    if(tail == NULL ){
        cout<<"List is Empty"<<endl;
        return ;
    }


    cout<<tail->data<<" ";
    Node* temp = tail->next;
    while(temp->data != tail->data){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    //Alternate Way
    // Node* temp = tail;
    // do{
    //     cout<<tail->data<<" ";
    //     tail = tail->next;
    // }
    // while(tail!=temp);

    cout<<endl;

}

void deleteNode(Node* &tail , int value){

    //If List is Empty
    if(tail==NULL){
        cout<<"List is Empty"<<endl;
        return;
    }
    else{
        
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // If there is only one node in LL
        else if(prev == curr){
            tail = NULL;
        }

        // More than 1 node 

        //if(tail == curr){
            tail = prev->next;
      //  }

        
        curr->next = NULL;
        delete curr;
    }
}


int main(){

    Node* tail = NULL;

    insertNode(tail , 5 , 3);
    print(tail);

    insertNode(tail , 3 , 5);
    print(tail);

    insertNode(tail , 5 , 7);
    print(tail);

    insertNode(tail , 7 , 9);
    print(tail);

    insertNode(tail , 3 , 4);
    print(tail);

    insertNode(tail , 7 , 8);
    print(tail);

    deleteNode(tail , 3);
    print(tail);

    deleteNode(tail , 9);
    print(tail);

    deleteNode(tail , 7 );
    print(tail);








    
    
    return 0;
}