#include<iostream>
#include<math.h>
using namespace std;

bool isSorted(int arr[] , int size){

    if(size==0)
    return true;

    if(size==1)
        return true;

        if(arr[0]>arr[1]){
            return false;
        }else{
            bool remaning = isSorted(arr+1 , size-1);
            return remaning;
        }
        
    
}

int main(){
    

    int arr[] = {1,2,5,7,9};
    int size = 5;

    bool ans = isSorted(arr,size);

    if(ans){
        cout<<"array is sorted";
    }else{
        cout<<"not sorted";
    }
    
    return 0;
}