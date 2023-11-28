#include<iostream>
#include<math.h>
using namespace std;

int main(){
    
    long findMin(int n, int m, vector< vector<int> > arr) {
    int k,b,a,x;
    cin>>n;
    cin>>m;
    int city[n]={0,0,0,0,0};
    for(x=1;x<=m;x++){
    cin>>a;
    cin>>b;
    cin>>k;
    for (int i=(a-1);i<b;i++){
        city[i]=city[i]+k;
    }
    }

        int min=city[0];
    for(int f=0;f<5;f++){
        if (city[f]<min)
        min = city[f];
    }
    return min; 
}
    return 0;
}
