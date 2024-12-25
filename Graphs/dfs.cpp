#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector <int> bfs(vector<vector<int>>& adj, int s, int n){
  int visited[n] = {0}; // visited array to keep track of already visited nodes
  stack <int> st; // STACK to keep track of the current node
  vector <int> sol; // final solution vector
  st.push(s); // push the first/starting node into the stack
  visited[s] = 1; // mark this node as visited
  
  
 // note this is an iterative proccess not recursive
  while (!st.empty()){ // if STACK becomes empty, all nodes have been visited
    int node = st.top();// declare a new variable as the current node i.e. the top of the STACK
    st.pop(); // pop this node from the STACK (waiting for the next node)
    sol.push_back(node);// push this node into the solution vector
    
    for (auto it: adj[node]){// iterate through its neighbours
      if (!visited[it]){// if the neighbour is not visited
        st.push(it);// push it into the stack
        visited[it] = 1; // mark it as visited
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
