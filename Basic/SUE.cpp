#include<iostream>
#include<math.h>
using namespace std;

// typedef struct employee
// {
//     int eID;
//     char fav ;
//     float salary ;
// }ep ;

union money
{
    int rice;
    char fav;
    float euro;
};


int main(){
//     ep salu;
//     salu.eID = 1;
//     salu.fav = 'A';
//     salu.salary = 12000;

//     cout<<salu.eID<<endl;
//     cout<<salu.fav<<endl;
//     cout<<salu.salary<<endl;

union money m1;
m1.rice = 34;
m1.fav = 'C';
    cout<<m1.rice<<endl;
    cout<<m1.fav<<endl;
        return 0;
}