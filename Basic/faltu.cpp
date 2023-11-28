#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter"<<endl;
    cin>>n;
    //int min=n;
    if(n==1){
    cout<<"1";
    }
    int a=1;
    while(n!=1||n!=0){
    while(a<n){
    a=a*2;
    }
    a=(a/2);
    n=n-a;
    min = n;

    }

    cout<<min;


    return 0;
}