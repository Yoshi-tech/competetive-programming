#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector <int> bfs(vector<vector<int>>& adj, int s, int n){
  int visited[n] = {0}; // visited array to keep track of already visited nodes
  queue <int> q; // queue to keep track of the current node
  vector <int> sol; // final solution vector
  q.push(s); // push the first/starting node into the queue
  visited[s] = 1; // mark this node as visited
  
  
  // note this is an iterative proccess not recursive
  while (!q.empty()){  // if queue becomes empty, all nodes have been visited
    int node = q.front(); // declare a new variable as the current node i.e. the front of the queue
    q.pop(); // pop this node from the queue (waiting for the next node)
    sol.push_back(node); // push this node into the solution vector
    
    for (auto it: adj[node]){ // iterate through its neighbours
      if (!visited[it]){ // if the neighbour is not visited
        q.push(it); // push it into the queue
        visited[it] = 1; mark it as visited
      }
    }
  } // this will repeat until all nodes visited
  return sol; // return the solution vector
}

int main(){
  int n, m, s;
  
  cin >> n >> m;
  
  vector<vector<int>> adj(n + 1); // declaration of adj list, note it is simillar to cache 
  
  for(int i = 0; i < m; i++){ // edge collection
    int v, u;
    
    cin >> v >> u;
    
    adj[v].push_back(u);
    adj[u].push_back(v);
    
  }
  cin >> s; // target/starting point 
  
  vector <int> sol = bfs (adj, s, n); // bfs function call
  
  for (int j = 0; j < sol.size(); j++){
    cout << sol[j] << endl;
  }
  
  
}
