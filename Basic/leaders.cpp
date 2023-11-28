#include<iostream>
#include<math.h>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"how many elements u want to insert in array"<<endl;
    cin>>n;
    int arr[n];
    vector< int >x;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    int leader = arr[n-1];
    cout<<leader<<endl;
    for(int i=(n-1);i>=0;i--){
        if(arr[i]>leader){
            leader = arr[];
            cout<<leader<<endl;
        }
        }
                    return 0;
    }

    // for(int i=0; i < x. size(); i++){
    //     cout << x.at(i) << " ";



