#include<iostream>
#include<math.h>
using namespace std;

bool Search(int arr[] , int s , int e , int key){

    if(s>e)
    return false;


    int mid = s + (e-s)/2;

    if(arr[mid]==key)
    return true;

    if(arr[mid]>key){
        return Search(arr , s , mid-1 , key);
    }else{
        return Search(arr , mid+1 , e , key);
    }
}

int main(){
    
    int arr[] = {2,4,6,10,16,18};
    int size = 6;
    int key = 16 ;

    bool ans = Search(arr , 0 , size-1 , key);

    if(ans){
        cout<<"Present"<<endl;
    }else{
        cout<<"Absent"<<endl;
    }


    return 0;
}