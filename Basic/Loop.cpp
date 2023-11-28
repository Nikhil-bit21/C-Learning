#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int i;
    cin>>i;
    int marks[]={90,89,96,93};
    // cout<<marks[0];
    // while (i<4){
    //     cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }
    do{
        cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
        i++;
    }
    while(i<4);
    return 0;
}