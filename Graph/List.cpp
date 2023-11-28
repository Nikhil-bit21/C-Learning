#include<iostream>
#include<math.h>
#include<unordered_map>
#include<list>
using namespace std;

//template <typename T> // for generic using kuch bhi use kr sakte int,string etc.

class Graph{

    public:
    unordered_map<int , list<int> > adj;

    void addEdge(int u , int v, bool dir){
        //dir => 0 for undirected graph
        //dir => 1 for directed graph

        //create an edge from u to v
        adj[u].push_back(v);

        if(dir == 0){
            adj[v].push_back(u);
        }
    }

    void printAdjList(){
        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<",";
            }
            cout<<endl;
        }
    }
};

int main(){

    cout<<"Enter number of nodes"<<endl;
    int n;
    cin>>n;

    cout<<"Enter number of edges"<<endl;
    int m;
    cin>>m;

    Graph g;
    
    for(int i=0;i<m;i++){
        int u,v;
        cin>> u >> v;
        
        //Creating an undirected graph
        g.addEdge(u,v,0);

    }

    //printing graph
    g.printAdjList();
    
    return 0;
}