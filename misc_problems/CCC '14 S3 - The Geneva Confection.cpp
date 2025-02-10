#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;

bool checkOrder(vector <int> &trains){
 stack <int> bridge;
  int expected = 1;
  
  
  for(int i = 0; i < trains.size(); i++){
    if(trains[i] == expected){
      expected++;
    }
    else{
      bridge.push(trains[i]);
    }
      
  while(!bridge.empty() && bridge.top() == expected){

      bridge.pop();
      expected++;
  }
  }

  return bridge.empty();
}

int main() {
  
  int t;
  
  cin >> t;
  
  for(int i =0; i < t; i++){
    int n;
    cin >> n;
    
    vector <int> trains(n);
    
    for (int j =0; j < n; j++){
      int u; 
      cin >> u;
      
      trains[j] = u;
    
    }
    bool out = checkOrder(trains);
      
    if (out){
      cout << 'Y' << endl;
    }
    else{
      cout << 'N' << endl;
    }
  }
}
