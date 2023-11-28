#include<iostream>
#include<math.h>
using namespace std;

class student{
    // by default private hi hote hai
    string name;
    int age;
    int height;

    public:
    void setname(string s){
        this->name = s;
    }
    void setage(int a){
        this->age = a;
    }
    void setheight(int h){
        this->height = h;
    }

    string getname(){
        return this->name;
    }

    int getage(){
        return this->age;
    }

    int getheight(){
        return this->height;
    }
};

int main(){

    student first;

    first.setname("Nikhil");
    first.setage(20);
    first.setheight(180);

    cout<<first.getname()<<" "<<first.getage()<<" "<<first.getheight()<<endl;


    
    return 0;
}