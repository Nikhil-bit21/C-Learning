#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n1,m1;
    cout<<"how many rows u want to insert in matrix"<<endl;
    cin>>n1;
    cout<<"how many column u want to insert in matrix"<<endl;
    cin>>m1;
    int arr1[n1][m1];
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            cin>>arr1[i][j];
        }
    }
    int n2;
    cout<<"how many columns u need in 2nd matrix"<<endl;
    cin>>n2;
    int arr2[m1][n2];
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            cin>>arr2[i][j];
        }
    }
    int arr3[n1][n2];
    for(int i = 0 ;i<n1;i++){
        for(int j=0;j<n2;j++){

            arr3[i][j]=0;
            for(int k=0;k<m1;k++){
            arr3[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }

    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }


    

        return 0;
}
