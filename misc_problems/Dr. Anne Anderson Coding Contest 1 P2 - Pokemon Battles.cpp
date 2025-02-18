#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

int main(){
  string c;
  cin >> c;
  int n;
  cin >> n;
  int type;
  vector <char> lookUp = {'G', 'W', 'F'};
  if(c[0] == 'F'){
    type = 0;
  }
  else if(c[0] == 'G'){
    type = 1;
  }
  else{
    type = 2;
  }
  vector <tuple <int, string>> moves(n);
  for (int i = 0; i < n; i++){
    string b; 
    int v;
    cin >> v >> b;
    moves[i] = make_tuple(v, b);
  }
  int maxDmg = 0;
  for (int i =0; i < n; i++){
    int currentDmg;
    if(get<1>(moves[i])[0] == c[0]){
      currentDmg = get<0>(moves[i]);
    }
    else if(get<1>(moves[i])[0] == lookUp[type]){
      currentDmg = get<0>(moves[i])/2;
    }
    else{
      currentDmg = get<0>(moves[i])*2;
    }
    
    if(currentDmg > maxDmg){
      maxDmg = currentDmg;
    }
  }
  
  cout << maxDmg;
}
