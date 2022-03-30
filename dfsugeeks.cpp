#include<bits/stdc++.h>
using namespace std;
void addEdg(vector<int>adj[],int u, int v){
    adj[u].push_back(v);
}
void DFSutil(int u, vector<int>adj[],vector<bool>&visited){
    visited[u]=true;
    cout<<u<<" ";
    for(int i=0;i<adj[u].size();i++){
        if(visited[adj[u][i]]==false){
            DFSutil(adj[u][i],adj,visited);
        }
    }
}
void DFS(vector<int> adj[],int v){
    vector<bool> visited(v,false);
    for(int u=0;u<v;u++){
        if(visited[u]==false){
            DFSutil(u, adj, visited);
        }
    }
}
int main(){

int v, n;
int x, y;
while(scanf("%d%d",&v,&n)==2){
    vector<int> adj[v];
    if(v==0&&n==0){
        break;
    }
    for(int i=0;i<n;i++){
            cin>>x>>y;
            addEdg(adj, x,y);


    }
    DFS(adj,v);

}


}
