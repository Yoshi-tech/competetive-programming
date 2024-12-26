#include <iostream>
#include <vector>
#include <queue>

using namespace std;
vector <int> bfs(int s, int n, vector<vector<int>> adj){
  vector <int> visited(n+1, 0);
  queue <int> q;
  vector<int> sol;
  vector <int> distance(n, -1); // initializing distance array with arbitrary value
  distance[s-1] = 0; // distance to source node from source node is 0
  q.push(s);
  
  visited[s] = 1;
  
  while(!q.empty()){
    int node = q.front();
    q.pop();
    sol.push_back(node);
    
    
    for(auto it: adj[node]){
      if(!visited[it]){
        q.push(it);
        visited[it] = 1;
        distance[it-1] = distance[node-1] + 1; // the distance for this point 'it' is one more than the node at the front of the queue!
      }
    }
  }
  return distance; // returning the distance array this time instead of the solution array
}

int main(){
  int n, m, s;
  
  cin >> n >> m;
  
  vector<vector<int>> adj(n+1);
  
  for(int i = 0; i < m; i++){
    int v, u;
    cin >> v >> u;
    adj[v].push_back(u);
    adj[u].push_back(v);
  }
  cin >> s;
  vector <int> out = bfs(s,n,adj);
  
  for (int i = 0; i < out.size(); i++){
    cout << out[i] << endl;
  }
}
