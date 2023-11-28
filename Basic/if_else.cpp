#include <iostream>
using namespace std;
int main()
{
    // cout<<"hello";
    int age ;
    cout<<"enter your age"<<endl;
    cin>>age;
    if(age>18){
        cout<<"you can vote";
    }
    else if(age==18){
        cout<<"you can apply for vote card";
    }
    else{
        cout<<"you cannot vote";
        }
    return 0;
}