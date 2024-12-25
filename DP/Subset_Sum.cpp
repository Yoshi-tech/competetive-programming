#include <iostream>
#include <vector>

using namespace std;

int sum (int t, int n, vector <int> &list, vector<vector<int>> &cache){
  
  if (t == 0){
    return 1;
  }
  if(n == 0){
    return 0;
  }
  if (cache[n][t] != -1){
    return cache[n][t];
  }
  else{ // note this time the transition logic checks wethear or not a sum is possible
    if (list[n-1] <= t){
      cache[n][t] = sum(t, n-1, list, cache) || sum(t - list[n-1], n-1, list, cache);
      return cache[n][t];
    }
    else{
      cache[n][t] = sum(t, n-1, list, cache);
      return cache[n][t];
    }
  }
}

int main(){
  int n, t;
  vector <int> list;
  cin >> n;
  
  for (int i = 0; i < n; i++){
    int temp;
    cin >> temp;
    list.push_back(temp);
  }
  cin >> t;
  
  vector<vector<int>> cache(n + 1, vector<int>(t+1, -1)); // cache
  
  int out = sum(t,n,list,cache);
  
  cout << out;
}
