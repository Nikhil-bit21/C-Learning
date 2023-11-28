#include<iostream>
#include<math.h>
using namespace std;

int main(){
    cout<<"enter how many rows u want to add"<<endl;
    int x;
    cin>>x;
    int arr[x][x];

    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            cin>>arr[i][j];
        }
    }

    


    return 0;
}