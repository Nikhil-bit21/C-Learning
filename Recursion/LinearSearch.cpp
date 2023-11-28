#include<iostream>
#include<math.h>
using namespace std;

bool Search(int arr[] , int size , int key){
    if(size==0)
    return false;

    if(arr[0]==key)
    return true;

    bool remaning = Search(arr+1 , size -1 , key);
    return remaning;
}

int main(){
    
    int arr[] ={2,3,4,5,6};
    int size = 5;
    int key = 9;

    bool ans = Search(arr , size , key);

    if(ans){
        cout<<"Key Found"<<endl;
    }else{
        cout<<"Key Not Found"<<endl;
    }

    return 0;
}