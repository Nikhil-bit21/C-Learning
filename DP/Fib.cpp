#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int fib(int n , vector<int> &dp){
    //Base Case
    if(n==0 || n==1){
        return n;
    }

    // step 3
    if(dp[n]!=-1){
        return dp[n] ;
    }

    
    // step 2
    dp[n] = fib(n-1 , dp) + fib(n-2 , dp);
    return dp[n];
}

int main(){
    
    int n;
    cout<<"Enter Your Number"<<endl;
    cin>>n;

    // step 1
    vector<int> dp(n+1);

    for(int i=0 ; i<=n ;i++){
        dp[i]=-1;
    }

    int ans = fib(n , dp);
    cout<<n<<"th number of Fib is->"<<ans;
    return 0;
}