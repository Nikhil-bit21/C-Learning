#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

// int gcd(int a, int b)
// {
//     int result = min(a, b);
//     while (result > 0) {
//         if (a % result == 0 && b % result == 0) {
//             break;
//         }
//         result--;
//     }
//     return result;
// }
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main(){
    int t;
    cout<<"how many times u want to run it "<<endl;
    cin>>t;
    while(t--){
    int m,n,a;
    cout<<"enter the length of the room"<<endl;
    cin>>m;
    cout<<"enter the breath of the room"<<endl;
    cin>>n;
    a= gcd(m,n);
    cout<<"minimum no of tiles required are "<<(m*n)/(a*a)<<endl;

    // int m,n,c,d,i;
    // int arr1[10];
    // int arr2[10];
    // cout<<"enter the lenght of the room"<<endl;
    // cin>>m;
    // cout<<"enter the breadth of the room"<<endl;
    // cin>>n;
    // for(c=1;c<(m/2);c++){
    //     if(m/c==0){
    //     cout<<c<<endl;
    //     }
    // };
    // for(i=0;i<10;i++){
    //     cout<<arr1[i]<<endl;
    // }
    // // for(d=1;d<(n/2);d++){
    //     if(n/d==0){
    //         int arr2[10] = {d};
    //     }
    // };
    // for (int i = 0; i < 4; i++){
    // if (arr1[i] == arr2[i])
    // {
    //     i=INT_MAX ;
    // };
    // }
    // cout<<"minimum no of tiles required are "<<((m*n)/(i*i));
}
    return 0;
}