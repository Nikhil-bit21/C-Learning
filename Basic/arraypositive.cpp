#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    int count =0;
    for(int i=0;i<x;i++){
        if(arr[i]>=0){
            continue;
        }
        for(int j=i;j<x;j++){
            arr[j]=arr[j]*(-1);
        }
        count++;
    }

    for(int i=0;i<x;i++){
        cout<<arr[i];
    }
    cout<<endl;

    cout<<count<<endl;
    return 0;
}