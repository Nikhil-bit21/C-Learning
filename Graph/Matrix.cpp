#include<iostream>
#include<math.h>
using namespace std;

class Graph{
public:
    int** adj;
    int n;

    Graph(int n){
        // Initialize the size of the adjacency matrix
        this->n = n;
        adj = new int*[n];
        for(int i=0;i<n;i++){
            adj[i] = new int[n];
            for(int j=0;j<n;j++){
                adj[i][j] = 0;
            }
        }
    }

    void addEdge(int u , int v, bool dir){
        //dir => 0 for undirected graph
        //dir => 1 for directed graph

        //create an edge from u to v
        adj[u][v] = 1;

        if(dir == 0){
            adj[v][u] = 1;
        }
    }

    void printAdjMatrix(){
        // print the adjacency matrix
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                cout << adj[i][j] << " ";
            }
            cout << endl;
        }
    }
};


int main(){

    
    cout<<"Enter number of nodes: "<<endl;
    int n;
    cin>>n;

    cout<<"Enter number of edges: "<<endl;
    int m;
    cin>>m;

    Graph g(n);
    
    for(int i=0;i<m;i++){
        int u,v;
        cin>> u >> v;
        
        //Creating an undirected graph
        g.addEdge(u,v,0);

    }

    //printing graph
    g.printAdjMatrix();


    return 0;
}