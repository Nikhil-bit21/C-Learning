#include<iostream>
#include<math.h>
using namespace std;

int main(){
  // int i,n;
  // int x[6];
  // cout<<"how many values u want to add in a array "<<endl;
  // cin>>n;
  // cout<<"enter all the values "<<endl;
  // for (i=0;i<n;i++){
  //   cin>>x[i];
  // }
  // for(int a = 0;a<n;a++){
  //   cout<<x[a]<<endl;
  // }

  // int i,a,b;
  // cout<<"how many layers u want to make"<<endl;
  // cin>>a;
  // int sum=1;
  // for(i=0;i<a;i++){
  //   sum = sum+(i*5);
  //   cout<<sum<<endl;
  // }
  // int sum=1;
  // int T,N;
  // cin>>T;
  // while(T--){
  //   for(N=0;N<=T;N++){
  //   sum = sum+(N*5);
  //   cout<<sum<<endl;
  // }

  // return 0;

  int n;
  cin>>n;
    int a = 5;
  int d = 5;
int sum=0;
  if(n>=1){
    sum++;
  }
  int j=0;
  while(n>1){
    sum=sum+5*j;
    j++;
  }
  cout<<sum;


}

