#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
  int m, n;
  cin >> m >> n;
  int ex = 0;
  vector <int> trains(n);
  queue <int> q;
  for(int i = 0; i < n; i++){
    cin >> trains[i];
  }
  int weight = 0;
  int counter = 0;
  while (ex < n){
    if (trains[ex] > m){
      break;
    }
    q.push(trains[ex]);
    weight += trains[ex];
    if(q.size() == 5){

      int cweight = q.front();
      q.pop();
      weight -= cweight;
     // cout << "new weight after removing " << cweight << ": "  << weight << " expected: " << counter <<  endl;

    }
    
    if (weight <= m) {
      counter++;
    }
    else{
      break;
    }
    
    ex++;
  }
  
  cout << counter;
  
}
