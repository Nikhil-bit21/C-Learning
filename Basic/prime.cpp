#include <iostream>
#include <math.h>
using namespace std;
int main()
{      
//     int n,r;
//     string a = "prime";
//     cout<<"enter your number"<<endl;
//   cin>>n;
//   for(r=2;r<n-1;r++){
//     if(n%r==0){
//     a="not prime";
//     break;
//     }
    
//   }
//   cout<<a;
  
  int n,r;
  cin>>n;
  bool a = 1;
  for(r=2;r<sqrt(n);r++){
    if(n%r==0){
      a=0;
      break;
    }
    else{
      a=1;
      
    }
  }
  if(a){
    cout<<"PRIME"<<endl;
  }
  else{
    cout<<"NOT PRIME"<<endl;
  }
    return 0;
}