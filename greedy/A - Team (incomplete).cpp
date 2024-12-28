#include <iostream>
#include <vector>
#include <string>

using namespace std;
bool greedy(vector <int> v){
  int counter = 0;
  for(int i = 0; i <3; i++){
    if(v[i] == 1){
      counter++;
    }
  }
  if(counter >= 2){
    return true;
  }
  else{
    return false;
  }
}
int main() {
  int n;
  int count = 0;
  cin >> n;
  vector <int> v;
  
  for(int i = 0; i < n; i++){
    for(int j = 0; j < 3; j++){
      int u;
      cin >> u;
      v.push_back(u);
      bool b = greedy(v);
      if(b){
        count++;
      }
    }
  }
  
  cout << count;
}
