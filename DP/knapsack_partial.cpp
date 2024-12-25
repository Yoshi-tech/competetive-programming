#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int knapsack(int w, int v, vector <int> &weight, vector <int> &value, vector<vector<int>> &cache){
  
  
  if (w == 0 | v == 0){
    return 0;
  }
  if (cache[v][w] != -1){
    return cache[v][w];
  }
  else{ // note theres two transition cases this time 
    if(weight[v-1] <= w){
      cache[v][w] = max(knapsack(w, v-1, weight, value, cache), value[v-1] + knapsack(w - weight[v-1], v-1, weight, value, cache));
      return cache[v][w];
    }
    else{
      cache[v][w] = knapsack(w, v-1, weight, value, cache);
      return cache[v][w];
    }
  }
  
}

int main(){
  int n, w;
  vector <int> weight;
  vector <int> value;
  cin >> n >> w;
  vector<vector<int>> cache(n + 1, vector<int>(w + 1, -1)); // cache declaration (2D again)
  
  for (int i = 0; i < n; i++){
     int wi, vi;
     
     cin >> wi >> vi;
     weight.push_back(wi); // generally best to use pushback with vectors
     value.push_back(vi);

     
  }
  
  int out = knapsack(w, 3, weight, value, cache);
  cout << out;
  
}
