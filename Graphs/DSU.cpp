#include <iostream>
#include <vector>
using namespace std;
vector <int> parent;

int find(int x){
  if(parent[x] == x){
    return x;
  }
  else{
    return find(parent[x]);
  }
}

void mergeSet(int a, int b){
  int rootA = find(a);
  int rootB = find(b);
  
  if(rootB != rootA){
    parent[rootB] = rootA;
  }
}

int main(){
  
  int n = 5; // number of elements
  
  parent.resize(n+1);
  
  // initializing the DSU
  for (int i = 1; i <= n; i++) {
    parent[i] = i;
  }
  // sample operations
  mergeSet(1, 2);
  mergeSet(3, 4);
  mergeSet(2, 3);
  
  cout << find(2) << endl; // returns 1, due to merger of 1 and 2
  cout << find(4) << endl; // returns 1, due to merger of 2 and 3
}

