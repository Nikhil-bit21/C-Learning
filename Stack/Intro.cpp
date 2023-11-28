#include<iostream>
#include<math.h>
#include<stack>
using namespace std;

class Stack{

    //Properties
    public:
    int *arr ;
    int top;
    int size;


    //Behaviour
    Stack(int size){
        this->size = size ;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(top < size -1){
            top++;
            arr[top] = element;
        }else{
            cout<<"Stack Over-Flow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }else{
            cout<<"Stack Under-Flow"<<endl;
        }
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }
};

int main(){

    Stack st(5);

    st.push(2);
    st.push(3);
    st.push(4);

    st.pop();

    cout<<"Top Element =>"<<st.peek()<<endl;

    if(st.isEmpty()){
        cout<<"Stack is Empty"<<endl;
    }else{
        cout<<"Stack is Not Empty"<<endl;
    }


    // stack<int> s;

    // //Push
    // s.push(2);
    // s.push(3);

    // //Pop
    // s.pop();

    // //Checking top element
    // cout<<"Top Element is =>"<<s.top()<<endl;

    // // checking if stack is empty or not 
    // if(s.empty()){
    //     cout<<"Stack is Empty"<<endl;
    // }else{
    //     cout<<"Stack is not Empty"<<endl;
    // }

    // cout<<"Size of Stack is =>"<<s.size()<<endl;
    
    return 0;
}