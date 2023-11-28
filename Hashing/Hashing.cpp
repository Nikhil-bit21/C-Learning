#include<iostream>
#include<math.h>
#include<unordered_map>
#include<map>
using namespace std;

int main(){
    
    // creation
    unordered_map<string,int> m;

    //insertion

    //1
    pair<string,int> p1 = make_pair("x",1);
    m.insert(p1);

    //2
    pair<string,int> p2("y",2);
    m.insert(p2);

    //3
    m["z"]= 2;
    m["z"]= 3; //(value update ho jaeegi) (ek key ke coresponding ek hi value hogi tho if koi key 1st time aarhi hai tho uski entry create hogi and then next time value update hogi same nhi hoga)

   // m["unknown key"]=4;
    
    //searching
    // cout<<m["z"]<<endl;
    // cout<<m.at("x")<<endl;
    
    // cout<<m["unknown key"]<<endl; //(isse ek entry create ho jati hai jho element ki tho vho 0 show kardeta hai)
    // cout<<m.at("unknown key")<<endl; //(isse sidha vho dekhta hai aaisa koi element hai ya nhi if nhi tho error)

    //size
    // cout<<m.size()<<endl;

    // to check presence(ki element present hai ya nhi) (it will return 0-> not present , 1-> present)
    // cout<<m.count("bro")<<endl;

    //Erase 
    m.erase("unknown key");
    // cout << m.size() << endl;

    //iterator

    unordered_map<string,int> :: iterator it = m.begin();
    while(it!=m.end()){
        cout<<it->first <<" "<<it->second<<endl;
        it++;
    }

    // hum jaise unordered map use kr rhe hai tho ye kisi bhi order mai print hoga aage piche khi se bhi 
    // if hume jaise insert kiya hai ussi order mai chaiye tho map use kr sakte hai 
    // sam ehi hai map<string,int> :: iterator it = m.begin(); , map<string,int> m;
    // map ki time complextiy -> o(log(n)); , unordered map ki -> constant o(1);

    


    



    


    return 0;
}