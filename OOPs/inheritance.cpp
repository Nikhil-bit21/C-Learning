#include<iostream>
#include<math.h>
using namespace std;

class Human{
    public:
    int height;
    int age;
    int weight;

    int getweight(){
        return this->weight;
    }

    void setheight(int h){
        this->height = h;
    }
};

class Male : public Human{
    public:
    string color;

    void Sleep(){
        cout<<"Bhai So raha hai";
    }
};

int main(){
    
    Male banda;

    cout<<banda.age<<endl;
    cout<<banda.color<<endl;
    cout<<banda.height<<endl;

    banda.Sleep();
    return 0;
}