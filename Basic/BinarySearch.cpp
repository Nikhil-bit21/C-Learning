#include<iostream>
#include<math.h>
using namespace std;

int BS(int arr[] , int size , int key) {
    int start = 0;
    int end = size-1 ;

    int mid = (start + end )/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }

        mid = (start + end )/2;
    }
    return -1;
}

int main(){
    int even[6] = {2,4,6,8,10,12};
    int odd[5] = {2,3,8,10,16};

    int ans1 = BS(even , 6 , 10);
    int ans2 = BS(odd , 5 , 10);

    cout<<ans1<<endl;
    cout<<ans2<<endl;


    return 0;
}