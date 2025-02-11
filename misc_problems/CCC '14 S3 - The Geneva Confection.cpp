#include <iostream>
#include <vector>
#include <stack>

using namespace std;
bool checkOrder(vector <int> &trains){
  stack <int> bridge;
  int expected = 1;
  
  for(int i = trains.size() -1; i >= 0; i--){
    if(trains[i] == expected){
      expected++;
    }
    else{
      bridge.push(trains[i]);
      //cout << "pushed: " << trains[i] << endl;
    }
    
    while(!bridge.empty() && bridge.top() == expected){
      bridge.pop();
      expected++;
      //cout << "inserting " << bridge.top() << endl;

    }
  }
  
  
  return bridge.empty();
}



int main(){
  int t;
  
  cin >> t;
  
  while(t--){
    int n;
    bool check = 0;
    cin >> n;
    
    vector <int> trains(n);
    
    for(int j =0;  j < n; j++){
      cin >> trains[j];
    }
    check = checkOrder(trains);
    if(check){
      cout << 'Y' << endl;
    }
    else{
      cout << 'N' << endl;
    }
  }
}
