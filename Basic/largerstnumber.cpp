#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int x;
    int c=0;
    int a=1;
    cout<<"enter the sum of the numbers "<<endl;
    int s;
    cin>>s;
    cout<<"how many digits are there"<<endl;
    int d;
    cin>>d;
    int count = 0;
    while(s>0){
        s=s-9;
        count++;
    }

    if(count!=d){
        cout<< -1<<endl;
    }
    else{
        while(s>0){
        if(s>9){
            x=9;
        }else{
            x=s;
        }

        c = c + (x*(a));
        a=(a*10);
        s=s-9;
    }
    cout<< c <<endl;
    }

    return 0;
    
}