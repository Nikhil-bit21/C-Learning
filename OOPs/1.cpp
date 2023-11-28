#include<iostream>
#include<math.h>
#include "hero.cpp"
using namespace std;

class Hero{
    

    int health;
    char level;
        
    public:
    char *name;
    static int Time_to_Complete;


    public:

    // Constructor
    Hero() {
        cout<<"Constructor called"<<endl;
        name = new char[100];
        
    }

    //Parameterised Constructor 
    Hero(int health , char level , char name[]){
        //cout<< "this ->"<<this<<endl;
        cout << endl;
        this->health=health;
        this->level= level;
        this->name = name;
    }

    //Copy Constructor  (jab hum khud ka copy constructor likh lete hai tho defalt copy constructor die ho jata hai)
    Hero (Hero &temp){

        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch , temp.name);
        this->name = ch;
        //cout<<"Copy Constructor Called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
    

    //Properties



    public:



    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }



    void sethealth(int h){
        health = h;
    }

    void setlevel(char ch){
        level = ch;
    }

    void setname(char name[]){
        strcpy(this->name , name);  // this->name = name;  
    }

    void print(){
        cout<<endl;
        cout<<"[Name:"<<this->name<<" , ";
        cout<<"Health:"<<this->health<<" , ";
        cout<<"Level:"<<this->level<<"].";
        cout<<endl;
        
    }

    static int random(){
        // return health; error bcz only access to static members
        return Time_to_Complete;
    }

    // Destructor
    ~Hero(){
        cout<<"Destrctor Called"<<endl;
    }

};

int Hero::Time_to_Complete = 5;

int main(){

    cout<<Hero::random()<<endl;




    // cout<<Hero::Time_to_Complete<<endl;

    // Hero h1;
    // h1.Time_to_Complete = 10;
    // cout<<h1.Time_to_Complete<<endl;
    // cout<<Hero::Time_to_Complete<<endl;









        // Hero h1;

        // Hero *h2 = new Hero;
        // // manully calling destructor
        // delete h2;


    return 0;
}

    // Const Keyword HOw to use it in object creation and how to create const function and how to use it in member data types
    // Initialisation List

    // Hero h1;
    // char name[7]="Sukuna";
    // h1.sethealth(90);
    // h1.setlevel('A');
    // h1.setname(name);

    

    // //Hero h2 = h1;
    // Hero h2(h1);



    // h1.name[0]='G';

    // h1.print();
    // h2.print();

    // h1=h2; 

    // h1.print();
    // h2.print();

    


    // Hero a;
    
    // Hero b(10);

    // cout<<"Addreas of b ->   "<< &b <<endl;
    // b.gethealth();


    // Constructor 
    // No return type
    // automatically invoke when a object is created 
    // jab bhi hum koi object create karte hai tho ek object_name.class_name() ke naam
    // se ek function call hota hai usse hi constructor khete hai
    // jaise hi humne khud se ek constructor bana diya deadult hatho hatho hi delete ho jaeega .

    // deafult constructor 
    // No input Type
    // same class ke naam se hi bnta hai constructor if hum koi nhi banatr hai tb bhi 
    // default bana hua hota hai ek

    // Parameterised Constructor
    // This Pointer :- it stores the addreas of Current Object
    // this->Health it points to the hero paramter health;

    // Copy Constructor 
    // jab bhi hum koi class banate hai apne ap inbuilt ek copy constructor ban jata hai.
    //  default copt constructor hota hai but if apne agar bana de tho vho die ho jata hau
    // deafult copy constructor do shallow copy 

    // Shallow copy vs Deep Copy 
    //Shallow -> pura copy krdeta hai with pointer addres same hi memory ko access kr raha hai 
    //Deep-> ek new copy banti hai usme changes hote hai iske liye hum apna ek khud ka 
    // copy constructor bana sakte hai ek naya array bana te hai then uska address usme pass kardete hai

    // Copy Assignment Operator (=) bs ek object ki value dusre object mai copy ho jaeegi

    // Destructor (for memory de-alloacation)
    // jab humare object out of scopr hone wale hote hai ki unka life time ab khatam hone wala hai
    // tab destructor call hojata hai or memory free krwa deta hai
    // scope khatam hona matlab like int main(){
    //     hero a;

    // } (ab yaha uska scope khatam hai tho destructor call ho jaeega phele hi)
    // default destructor bhi hota hai jaise hi onject banta hai apne ap ban jata hai
    // same name as class name
    // no return type 
    // no i/p parameter
    // jho bhi object hum statically create krte hai unke liye destructor automatically call hota hia 
    // jho manually bane hai uske liye karna padega like delete object name;

    // Static Keyword (Creates a data member that belongs to class)
    // and to access it we dont need to create object
    // hume isko intialise karna hoga , class ke bhar initialse hoga by data_type_of_datamember name_of_class :: name_of_data_member = value_of_data_member;
    // ::(scope resolution operator)
    // object bana ke bhi use kr sakte hai or bina object ke bhi bcz it belongs to class;
    // ye sabke liye same hota hai tho if ki bhi value change karta hai tho overall value changed


    // Static Functions
    // NO need to create objects
    // simply class ke name se call ho jaeega 
    // they dont have this keyword (bcz this keyword is pointer to current object but yaha tho koi objet hi nhi hai)
    // they can only access to static data-memeber

    // // Static allocation 
    // Hero a;

    // //Dynamically 
    // Hero *b = new Hero;

    // // printing in statuc vs dynamic

    // //static

    // a.sethealth(70);
    // a.setlevel('D');
    // cout<<"Health is:"<<a.gethealth()<<endl;
    // cout<<"level is:"<<a.getlevel()<<endl;

    // //dynamic

    // b->sethealth(80);
    // b->setlevel('C');
    // cout <<"Health is:"<<b->gethealth()<<endl;  // cout<<"Health is:"<<(*b).gethealth()<<endl; 
    // cout <<"level is:"<<b->getlevel()<<endl;    // cout<<"level is:"<<(*b).getlevel()<<endl;



    // Hero Itadori;

    //cout<<"Size:"<<sizeof(Itadori)<<endl; //(class ke varibale ke according usko memory allocate hogi and uske according uska size aaega)
    // (empty class ka size 1 aata hai just for identification ke liye usko memory allocate ho jati hai )
    // class ko alag file mai bhi bana sakte hai then #include<classname.cpp> se inculde karlo usko;

    // Padding and greedy alignment

//     hero h2;

//    // cout<<"Size:"<<sizeof(h2)<<endl;

//     Itadori.sethealth(80);
//     Itadori.setlevel('C'); 

//     cout<<"Health is:"<<Itadori.gethealth()<<endl;
//     cout<<"level is:"<<Itadori.getlevel()<<endl;

