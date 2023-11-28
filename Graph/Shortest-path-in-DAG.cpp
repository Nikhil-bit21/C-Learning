#include<iostream>
#include<math.h>
#include<unordered_map>
#include<list>
#include<stack>
#include<vector>
#include<climits>
using namespace std;

class Graph{

    public:
    unordered_map<int,list<pair<int,int> > > adj;

    void addEdge(int u , int v , int w){
        pair<int,int> p = make_pair(v,w);

        adj[u].push_back(p);
    }

    void print(){
        for(auto i:adj){
            cout<< i.first <<" ->";
            for(auto j:i.second){
                cout<<"("<<j.first << "," << j.second << "), ";
            }cout<<endl;
        }
    }

    void dfs(int node , unordered_map<int,bool> &vis , stack<int> &s){
        vis[node] = true;

            for(auto i : adj[node]){
                if(!vis[i.first]){
                    dfs(i.first , vis , s);
                }
            }
            s.push(node);
        }
        

    void getShortest(int node , vector<int> &dist , stack<int> &s){
        dist[node] = 0;

        while(!s.empty()){
            int front = s.top();
            s.pop();

            if(dist[front] != INT_MAX){
                for(auto i : adj[front]){
                    if(dist[front] + i.second < dist[i.first] ){
                            dist[i.first] = dist[front] + i.second; 
                    }
                }
            }
        }
    }
};

int main(){

    Graph g;

    // g.addEdge(0,1,5);
    // g.addEdge(0,2,3);
    // g.addEdge(1,2,2);
    // g.addEdge(1,3,6);
    // g.addEdge(2,3,7);
    // g.addEdge(2,4,4);
    // g.addEdge(2,5,2);
    // g.addEdge(3,4,-1);
    // g.addEdge(4,5,-2);

    g.addEdge(1,2,1);
    g.addEdge(1,3,1);
    g.addEdge(2,3,1);
    g.addEdge(2,6,1);
    g.addEdge(3,4,1);
    g.addEdge(3,9,1);
    g.addEdge(4,5,1);
    g.addEdge(5,6,1);
    g.addEdge(6,7,1);
    g.addEdge(7,8,1);
    g.addEdge(8,9,1);

    g.print();

    int n = 10;

    unordered_map<int,bool>vis;
    stack<int> s;

    for(int i=0;i<n;i++){
        if(!vis[i]){
            g.dfs(i , vis , s );
        }
    }

    int src = 1;

    vector<int> dist(n,INT_MAX);


    g.getShortest(src , dist , s);

    cout<<"Answer is "<<endl;

    for(int i=0;i<n;i++){
        cout<<dist[i]<<" ";
    }cout<<endl;
    
    return 0;
}