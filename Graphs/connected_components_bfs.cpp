#include <iostream>
#include <vector>
#include <queue>

using namespace std;
void bfs(int s, int n, vector<vector<int>>& adj, vector <int> &visited){ // function for bfs (doesnt need to return bfs array)
  queue <int> q;
  vector <int> sol;
  q.push(s);

  
  
  while (!q.empty()){  
    int node = q.front(); 
    q.pop(); 
    sol.push_back(node); 
    
    for (auto it: adj[node]){ 
      if (!visited[it]){ 
        q.push(it); 
        visited[it] = 1; 
      }
    }
  } 
}

int counter(int s, int n, vector<vector<int>>& adj, vector <int> &visited){ // function for counting connected components
  int count = 0;
  for (int i = 1; i < n; i++){
    if(!visited[i]){ // everytime we see a node which isnt visited, we start a bfs at it, this will cause all of its connected nodes to be visited, so the only time after when we should see a 0 is if we are in a different connected component of the graph
      bfs(i, n, adj, visited);
      count++; // hence count + 1
    }
  }
  
  return count;
}

int main(){
  int m, n;
  
  cin >> n >> m;
  
  vector<vector<int>> adj(n+1);
  
  for (int i = 0; i < m; i++){
    int v,u;
    cin >> v >> u;
    adj[v].push_back(u);
    adj[u].push_back(v);
  }
  vector<int> v(n+1, 0);
  
  int out = counter(1, n, adj, v);
  
  cout << out;
  
}
