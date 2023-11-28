#include<iostream>
#include<math.h>
using namespace std;

int Sum(int arr[] , int size){
    if(size==0)
    return 0;

    if(size==1)
    return arr[0];

    int remaning = arr[0] + Sum(arr+1 , size-1);
    return remaning;
}

int main(){
    
    int arr[]={6,7,8,3,2};
    int size =5;

    int sum = Sum(arr,size);

    cout<<sum;

    return 0;
}