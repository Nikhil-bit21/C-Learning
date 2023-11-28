#include<iostream>
#include<math.h>
using namespace std;

class Trienode{

    public:
    char data;
    Trienode* children[26];
    bool isterminal ;

    Trienode(char ch){
        for(int i=0;i<26;i++){
            children[i] = NULL;
        }
        isterminal = false;
    }
};

class Trie{

    private:
    void insertUtil(Trienode* root , string word){
        //base case 
        if(word.length() == 0){
            root->isterminal = true;
            return;
        }

        //assumption , word will be in CAPS
        int index = word[0] - 'A';
        Trienode* child;

        //present
        if(root->children[index]!=NULL){
            child = root->children[index];
        }else{
            //absent 
            child = new Trienode(word[0]);
            root->children[index] = child;
        }

        insertUtil(child , word.substr(1));
    }    

    bool searchUtil(Trienode* root , string word){

        //base case 
        if(word.length() == 0){
            return (root->isterminal);
        }

        int index = word[0] - 'A';
        Trienode* child;


        //present
        if(root->children[index] != NULL){
            child = root->children[index];
        }else{
            //absent 
            return false;
        }

        //recursion
        return searchUtil(child , word.substr(1));

    }

    void removeUtil(Trienode* root , string word){

        if(word.length() == 0){
            root->isterminal = false;
            return;
        }

        int index = word[0] - 'A';
        Trienode* child;

        child = root->children[index];
        
        //if word is not present in trie
        if(child == NULL){
            return;
        }

        removeUtil(child , word.substr(1));
    }

    public:
    Trienode* root;

    Trie(){
        root = new Trienode('\0');
    }

    void insert(string word){
        insertUtil(root , word);
    }

    bool search(string word){
        return searchUtil(root , word);
    }

    void remove(string word){
        removeUtil(root , word);
    }
};

int main(){

    Trie *t = new Trie();

    t->insert("NIKHIL");
    cout<<"Present or Not "<<t->search("abc")<<endl;
    cout<<"Present or Not "<<t->search("nikhil")<<endl;
    cout<<"Present or Not "<<t->search("NIKHIL")<<endl; 

    t->insert("HELLO");
    t->insert("BIEE");

    cout<<"Present or Not "<<t->search("BIEE")<<endl;
    t->remove("BIEE");

    cout<<"Present or Not "<<t->search("BIEE")<<endl;
    
    return 0;
}