#include<iostream>
#include<math.h>
using namespace std;

int f(int n)
    {
        int count = 0;
        int x=0;
    while(n>0){
        int r=n%10;
        // cout<<"hii"<<endl;
        x=x+r;
        n=n/10;
            count++;
        
    }
    

    return count;
    }

int main(){
    int n;
    cin>>n;
    int c;
    
    if(n>9){
        // cout<<"hello"<<endl; 
        c = f(n);

    }
cout<<(c-1);
    return 0;

}