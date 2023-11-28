#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main(){
int a=8;
int r,n;
cin>>n;
cin>>r;
vector<int>v;
    while(a--){
    if(r==0){
     if((n&1) == 1){
     v.insert(v.begin(),1);
     }
     else{
       v.insert(v.begin(),0);
     }
   }
    else{
       if((n&1) == 1){
     v.insert(v.begin(),0);
     }
     else{
       v.insert(v.begin(),1);
     }
    }
    n=n>>1;
    --r;
  }

  for(int i=0;i<v.size();i++){
    if(v[i]==1){
      v[i]=0;
    }else{
      v[i]=1;
    }
  }
  int c=1;
  for(int i=(v.size()-1);i>=0;i--){
   if(c>0){
    if(v[i]==0){
      v[i]++;
      c=0;
    }
    else{
      v[i]=0;
      c=1;
    }
   }
  }
  int sum=0;
  int x=0;
  for(int i=v.size()-1;i>=0;i--){
    if(v[i]==0){
      x++;
    }
    else
    {
      sum=sum+ pow(2,x);
    }
  }

  cout<<(-sum);
    return 0;
}