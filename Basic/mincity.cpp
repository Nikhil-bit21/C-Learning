#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int k,b,a;
    int city[5]={0,0,0,0,0};
    for(n=1;n<=m;n++){
    cin>>k;
    cin>>a;
    cin>>b;
    for (int i=(a-1);i<b;i++){
        city[i]=city[i]+k;
    }
    }
        int min=city[0];
    for(int f=0;f<5;f++){
        if (city[f]<min)
        min = city[f];
    }
    cout<<min<<endl;
    return 0;
}