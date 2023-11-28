#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    int y=0;
    int r=1;
    int arr[4]={1,1,1,1};
    for(int i =1;i<=4;i++){
        if(i%r==0){
        arr[i]=arr[i]*(-y);
        y++;
        }
        else{
            arr[i]=arr[i];
        }
        r++;
    }
        for(int i=0;i<4;i++){
            cout<<arr[i];
        }

    
    return 0;
}