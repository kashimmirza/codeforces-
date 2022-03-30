// Adjascency List representation in C++

#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1000];

// Add edge

// Print the graph
void printGraph(vector<int> adj[], int V) {
  for (int d = 0; d < V; d++) {
     int cnt =0;
    for (int i =0;i<V;i++){

        if (adj[d][i]==1){

            cnt = cnt + 1;
        }
    }
      cout << cnt<<endl;

  }
}
int main(){
int n;
cin>>n;
int a, b;
for(int i=1;i<=n;i++){


    cin>>a>>b;
    adj[a].push_back(1);
    adj[b].push_back(1);
}
printGraph(adj, n);





}

