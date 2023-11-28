#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
    int x;
	cin>>x;
	int arr[x];
	for(int i=0;i<x;i++){
	cin>>arr[i];
	}

    sort(arr,arr+x);

    int count=0;
    for(int i=0;i<x;i++){
        if(arr[i]==arr[i+1]){
            i++;
        }
        else{
            count++;
        }
    }
    // for(int i=0;i<x;i++){
	// cout<<arr[i]<<" ";
	// }

    cout<<count;
    return 0;
}