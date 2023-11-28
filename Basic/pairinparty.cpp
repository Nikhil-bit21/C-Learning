#include<iostream>
#include<math.h>
#include <algorithm>
using namespace std;

int main(){
    int x;
    cout<<"how many boys/girls are coming in party"<<endl;
    cin>>x;
    int arr1[x];
    int arr2[x];

    cout<<"enter the number assigned to boys"<<endl;
    for(int i =0;i<x;i++){
        cin>>arr1[i];
    }

    cout<<"enter the number assigned to girls"<<endl;
    for(int i =0;i<x;i++){
        cin>>arr2[i];
    }

    int min=0;
    sort(arr1, arr1 + x);
    sort(arr2, arr2 + x);

    for(int i=0;i<x;i++){
        min=min+(arr1[i]*arr2[(x-1)-i]);
        
    }

    cout<<min;
    return 0;
}