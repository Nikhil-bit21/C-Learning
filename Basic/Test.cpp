#include<iostream>
#include<math.h>
#include<climits>
using namespace std;

int main(){
    // int n;
    // cout<<"enter 1st side"<<endl;
    // cin>>n;
    
    // for(int i =1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         int c = i+j;
    //         if(c%2 == 0){
    //             cout<<"*";
    //         }else{
    //             cout<<"#";
    //         }
            
    //     }cout<<endl;;
    // }

    
int k,b,a,n,m;
    int city[5]={0,0,0,0,0};
    cout<<"how many phases u want"<<endl;
    cin>>m;
    for(n=1;n<=m;n++){
    cout<<"how many people u want to add"<<endl;
    cin>>k;
    cout<<"from which city u want to add the people"<<endl;
    cin>>a;
    cout<<"till which city u want to add people"<<endl;
    cin>>b;
    for (int i=(a-1);i<b;i++){
        city[i]=city[i]+k;
    }
    }

    int min = city[0];
    for(int i=0;i<5;i++){
        if(min>city[i]){
            min=city[i];
        }
    }
    cout<<min;

    //     int minNo=city[0];
    // for(int f=0;f<5;f++){
    //     if (city[f]<min)
    //     min = city[f];
    //     minNo= min(minNo,city[f]);
    // }
    // cout<<"minimum number of people in a city is :"<<endl;
    // cout<<minNo<<endl;

    // for(int x=0;x<5;x++){
    //     cout<<city[x]<<" ";
    // }




    


    // cout<<"enter how many people u want add again"<<endl;
    // cin>>k;
    // cout<<"from which city u want to add the people"<<endl;
    // cin>>a;
    // cout<<"till which city u want to add people"<<endl;
    // cin>>b;
    // for (int i=(a-1);i<b;i++){
    //     city[i]=city[i]+k;
    // }
    // for(int x=0;x<5;x++){
    //     cout<<city[x];
    // }
    // cout<<endl;
    // cout<<"enter how many people u want add again"<<endl;
    // cin>>k;
    // cout<<"from which city u want to add the people"<<endl;
    // cin>>a;
    // cout<<"till which city u want to add people"<<endl;
    // cin>>b;
    // for (int i=(a-1);i<b;i++){
    //     city[i]=city[i]+k;
    // }
    // for(int x=0;x<5;x++){
    //     cout<<city[x];
    // }

    return 0;
}

// for(int i =1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             int c = i+j;
//             if(c%2 == 0){
//                 System.out.print(1);
//             }else{
//                 System.out.print(0);
//             }
            
//         }System.out.println();
//     }
    
    