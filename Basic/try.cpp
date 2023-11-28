#include <iostream>
#include <math.h>
using namespace std;
int main()
{  
// int n , r , sum ;
// int a = 0;
//     cout<<"enter your number ";
//     cin>>n;
//     sum=0;
//     while (n>0){
//         r=(n%10);
//         sum=(sum+((r+1)*(pow(10,a))));
//         n=n/10; 
//         a++;
        
//     }
//     cout<<sum;
 int t;
 cin>>t;
 while(--t){
    int n;
    cin>>n;
    int sum =0,r,a=0;
    while (n>0){
        r=(n%10);
        sum=(sum+((r+1)*(pow(10,a))));
        n=n/10; 
        a++;
      }	
    cout<<sum<<endl;
 }
    
    return 0;
}