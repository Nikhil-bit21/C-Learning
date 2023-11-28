#include<iostream>
#include<math.h>
#include <vector>
using namespace std;

int main(){
    int s;
    cin>>s;
    int d;
    cin>>d;

    vector <int> v;
    while(d--){
        if(s>9){
            v.push_back(9);
        }
        else if(s<9&&s>0){
            v.push_back(s);
        }
        else{
                v.push_back(0);
            }
            s=s-9;
        }
    

    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    return 0;
}