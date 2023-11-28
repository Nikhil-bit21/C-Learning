#include<iostream>
#include<math.h>
#include<string>
using namespace std;

void reverse(string st[]){
    int s=0;
    int e=st.length()-1;

    while(s<=e){
        swap(st[s++],st[e--]);
    }
}

void make_string(char ch[]){
    string st = "";
    if(ch==" "){
        reverse(st)
    }

    st.push_back(ch);
}

int main(){
    
    string st;
    cout<<"enter your string"<<endl;
    getline (cin,st);



    return 0;
}