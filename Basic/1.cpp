#include<iostream>
#include<math.h>
#include <climits>
using namespace std;

int ls(int arr[],int n,int key)
{
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
        
    }
    return -1;
}

int main(){
    // int j,n,p,l;
    // cout<<"enter the value u want to strt with "<<endl;
    // cin>>p;
    // cout<<"enter the total length "<<endl;
    // cin>>l;
    // cout<<"enter the value that much u want to move "<<endl;
    // cin>>n;
    // j=(n+p)-1;
    // if(j>l){
    //     while(j>l){
    //         j=j-l;
    //     }

    // }
    // cout<<j<<endl;
    // int p = 8;
    // int n= 4;
    
    // cout<<((p/n)+1);
    // int n;
    // cin>>n;

    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int counter= 1;

    // while(counter <n){
    //     for (int i=0;i<n-counter;i++){
    //         if(arr[i]>arr[i+1]){
    //             int temp=arr[i];
    //             arr[i]=arr[i+1];
    //             arr[i+1]=temp;
    //         }
    //     }
    //     counter++;
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    // int t;
    // cin>>t;
    // while(t--){
//     int n,r;
//     cout<<"enter your number"<<endl;
//     cin>>n;
//     int count =0;
//     int sum=0;
//     while (n>0){
//         r=(n%10);
//         sum=sum+r;
//         n=n/10; 
//         if(sum>10){
//             count++;
//         }
//     }	
// cout<<count<<endl;




//  CUT CHOCLATE 


int k,p;
cout<<"how many pices u want"<<endl;
cin>>k;
int max=0;
// int arr[k-1];
for(int i=1;i<k;i++){
        p = i*(k-i);
        // for(i=0;i<(k);i++){
        // arr[i-1]=p;
        if(p>max){
            max=p;
        }
    
        // cout<<p<<endl;
// }
}

// for(int i=0;i<k-1;i++){
//     cout<<arr[i]<<" ";
// }
// for(int i=0;i<k-1;i++){
//     for(int j=i+1;j<k;j++){
//         if(arr[j]<arr[i]){
//             int temp=arr[j];
//             arr[j] = arr[i];
//             arr[i]=temp;
//         }
//     }
// }
// cout<<endl;
// cout<<arr[k-2];

cout<<max;






}


