#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main(){
    int a;
    int ma;
    cout<<"how much money u have "<<endl;
    cin>>ma;
    int t;
    cout<<"total number of toys u have "<<endl;
    cin>>t;
    cout<<"enter cost of each toy "<<endl;
    vector<int>cost;
    for(int i=0;i<t;i++){
        cin>>a;
        cost.push_back(a);
    }

    sort(cost.begin(), cost.end());

    // for(int i=0;i<cost.size();i++){
    //     cout<<cost[i]<<" ";
    // }
    int i=0;
    int count = 0;
    int sum =ma;
    while(sum>0){
        sum = sum-(cost[i]);
        i++;
        count++;

    }
    cout<<count<<endl;
    
    return 0;
}