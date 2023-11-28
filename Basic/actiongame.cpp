#include<iostream>
#include<math.h>
#include<vector>
using namespace std;


int main(){

    int x;
    cout<<"how many enemy u have"<<endl;
    cin>>x;
    int arr[x];
    cout<<"enter strength of your enemy"<<endl;
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }

    vector <int> v;
    int k;
    cout<<"enter your strenth"<<endl;
    cin>>k;
    int h=0;
    for(int i=0;i<x;i++){
        if(arr[i]<=k){
            h=h+k-arr[i];
            v.push_back(h);
        }
        else{
                h=0;
        }
    }

    sort(v.begin(),v.end());
    cout<<v[v.size()-1];
    return 0;
}