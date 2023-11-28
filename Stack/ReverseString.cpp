#include<iostream>
#include<math.h>
#include<stack>
using namespace std;

int main(){

    string str = "Nikhil";
    stack<char> st;

    for(int i=0;i<str.length();i++){
        char a = str[i];
        st.push(a);
    }

    string ans = "";

    while(!st.empty()){
        char a = st.top();
        ans.push_back(a);

        st.pop();

    }
    
    cout<<ans<<endl;

    
    return 0;
}