#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x=max(c,d);
    int sum=a+b;
    int h=0;
    int z=max(a,b);
    while(x-sum>0){
        if((x-sum)==z || (x-sum)==sum ){
            h= 1;
        }
        else{
            h= 0;
        }
            x=x-sum;
    }

    cout<<h;
    return 0;
}