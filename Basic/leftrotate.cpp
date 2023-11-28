#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"how many elements u want to add"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int arr1[n];
    int r;
    cout<<"how many rotation u wnt "<<endl;
    cin>>r;
    int j = 0;
    for(int i=0;i<n;i++){
        if(i<(n-r)){
        arr1[i]=arr[i+r];
        }
        else{
            arr1[i]=arr[j];
            j++;
        }
    }   
    // for(int i=0;i<r;i++){
    // arr[n-(i+1)]=arr[n-1-i-8];
    // }
    // // for(int i=0;i<r;i++){
    // //     arr[i]=arr[n-r+i];
    // // }
    // for(int i=0;i<(n-r);i++){
    //     // if(i<(n-r)){
    //     arr[i]=arr[i+1];
    //     // }
    //     // else{
    //     //     arr[i]=arr[n-i];
    //     // }
    // }
    cout<<endl;
    for(int i=0;i<n;i++){
    cout<<arr1[i];
    }
    return 0;
}