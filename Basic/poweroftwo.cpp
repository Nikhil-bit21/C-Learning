#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int x;
    cout<<"enter the size of array"<<endl;
    cin>>x;
    int arr[x];
    cout<<"enter array elements"<<endl;
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    int h;
    for(int i=0;i<x;i++){
        h=(arr[i]&(arr[i]-1));
        if(h==0){
            arr[i]=1;
        }
        else{
            arr[i]=0;
        }
    }

    for(int i=0;i<x;i++){
        cout<<arr[i];
    }
    return 0;
}