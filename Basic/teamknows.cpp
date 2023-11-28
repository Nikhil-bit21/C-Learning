#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main(){
    int x,y;
    int val;
    cout<<"how many persons are there in class"<<endl;
    cin>>x;
    cout<<"how many subjects are there"<<endl;
    cin>>y;

    vector<vector<int> > v;
    for(int i = 0; i < x; i++){
    vector<int> temp;
    for(int j = 0; j < y; j++){
        cin >> val;
        temp.push_back(val);
    }
    v.push_back(temp);
    temp.clear();
}


    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }


    // for(int i = 0; i < x; i++){
    // vector<int> temp;
    // for(int j = 0; j < y; j++){
    //     cin >> val;
    //     temp.push_back(val);
    // }
    // v.push_back(temp);
    // temp.clear();
    // }
    // for(int i=0;i<x;i++){
    //     for(int j=0;j<y;j++){
            
    //     }
    // }

    return 0;
}