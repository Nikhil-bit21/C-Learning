#include<iostream>
#include<math.h>
using namespace std;

int Power(int a , int b){

    if(b==0)
    return 1;

    if(b==1)
    return a;
    
    if(b/2!=0){
        return a*(Power(a,b/2) * Power(a,b/2)); 
    }else{
        return (Power(a,b/2) * Power(a,b/2));
    }
}

int main(){
    int a = 2;
    int b = 3;

    int ans = Power(a,b);

    cout<<ans<<endl;


    return 0;
}