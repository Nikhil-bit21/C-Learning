#include<iostream>
#include<math.h>
using namespace std;

void reverse(string &s , int i , int j){

    if(i>j)
    return ;

    swap(s[i],s[j]);
    i++;
    j--;

    reverse(s , i ,j);
}

int main(){
    
    string str ="hello";

    reverse(str , 0 , str.length()-1);
    cout<<str;
    return 0;
}