#include<iostream>
#include<math.h>
using namespace std;

bool Check(string s , int i , int j){
    if(i>j)
    return true;

    if(s[i]!=s[j])
    return false;
    i++;
    j--;

    return Check(s , i ,j);
}

int main(){
    
    string str ="hello";

    bool ans = Check(str , 0 , str.length()-1);

    if(ans){
        cout<<"it's a palindrom";
    }else{
        cout<<"not a palindrom";
    }
    return 0;
}