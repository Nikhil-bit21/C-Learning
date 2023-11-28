#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
	cin>>t;
	while(t--){
	int n,k,x,y,z,v;
    cin>>n>>k>>x>>y;
    z=(k*x);
    v=((k*x)+((n-k)*(y)));
    if((n-k)==0){
	cout<<z<<endl;
	}else{
	cout<<v<<endl;
	}
	}
    return 0;
}