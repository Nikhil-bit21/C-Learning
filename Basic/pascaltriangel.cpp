#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int x;
    cout<<"how many rows u wnt to print"<<endl;
    cin>>x;

    int arr[x][x];

    int sum=0;

    for(int i=0;i<x;i++){
        for(int j=0;j<=i;j++){
            if(j==0||j==i){
                arr[i][j]=1;
            }

            else if(j==(i-1)||j==(1)){
                arr[i][j]=i;
            }
            else{
                arr[i][j]=(sum);
            }
            
            
        }
        sum = sum+i;
    }

for(int i=0;i<x;i++){
        for(int j=0;j<=i;j++){
            if(j==i){
            cout<<arr[i][j];
            }
            else{
                cout<<arr[i][j]<<"*";
            }
        }
        cout<<endl;
    }

    
    return 0;
}