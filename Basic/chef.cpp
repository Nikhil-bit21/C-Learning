#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int T;
    cout<<"how many times u want to run the code"<<endl;
    cin>>T;
    
    while(T--){
        // int x,y;
        // cout<<"enter how mach money chef has"<<endl;
        // cin>>x;
        // cout<<"enter amount of bill"<<endl;
        // cin>>y;
        // if(x>=y){
        //     cout<<"yes"<<endl;
        // }
        // else{
        //     cout<<"no"<<endl;
        // }

        int n;
        cout<<"how many students are there in your class"<<endl;
        cin>>n;
        int h[n];
        for(int i=0;i<n;i++){
            cout<<"H"<<(i+1)<<endl;
            cin>>h[i];
        }
        for (int v=0;v<n;v++){
            cout<<h[v]<<" ";
        }
        cout<<endl;
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
            if(h[j]!=h[i]){
                count++;
            
            }
            }
        }
        cout<<"total number of not equal numbers are "<<endl;
        cout<<(count)<<endl;
            return 0;
} 
}