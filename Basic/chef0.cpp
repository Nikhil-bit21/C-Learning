#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int t;
    cout<<"how many times u want u run the code"<<endl;
	cin>>t;
	while(t--){
	int a,b,n,i;
	cin>>a;
    cin>>b;
    cin>>n;
	if(a==b){
	cout<<(-1)<<endl;
	}
	i=n;
	while (i<=50)
	{
	if(i%a==0 && i%b!=0){
	cout<<i<<endl;
	break;
	}
	i++;
	
	}
	
	}
        return 0;
	}

