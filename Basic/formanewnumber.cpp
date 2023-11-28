#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main(){
    int x;
    cout<<"enter the number"<<endl;
    cin>>x;

    vector <int> v;

    while(x>0){
        int r=x%10;
        v.insert(v.begin(),r);
        x=x/10;
    }

    vector<int>a;

    for(int i=0;i<v.size();i++){
        if(v[i]%2==0){
            a.push_back(v[i]);
        }
    }
    int h=0;
    for(int i=0;i<a.size();i++){
        h=((h*10)+a[i]);
    
    }

    cout<<h;
    return 0;
}