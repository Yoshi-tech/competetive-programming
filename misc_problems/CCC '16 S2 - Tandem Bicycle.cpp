#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int greedy(vector <int> &peg, vector <int> &dmoj, bool qType){
  int sol =0;;
  if (qType == true){
    sort(peg.begin(), peg.end());
    sort(dmoj.begin(), dmoj.end()); 
    reverse(peg.begin(), peg.end());
    reverse(dmoj.begin(), dmoj.end());
  }
  else{
    sort(peg.begin(), peg.end());
    sort(dmoj.begin(), dmoj.end()); 
    reverse(peg.begin(), peg.end());
  }
  vector <int> sums(peg.size());
  
  for(int i =0; i < peg.size(); i++){
    if(peg[i] > dmoj[i]){
      sums[i] = peg[i];
    }
    else{
      sums[i] = dmoj[i];
    }
  }
  for(int i =0; i < peg.size(); i++){
    sol += sums[i];
  }
  return sol;
}

int main() {
  
  int t, n;
  
  cin >> t >> n;
  
  bool qType = false;
  if(t == 1){
    qType = true;
  }
  
  vector <int> dmoj(n);
  vector <int> peg(n);
  
  for(int i =0; i < 2; i++){
    for(int j =0; j < n; j++){
      if(i == 0){
        int v;
        cin >> v;
        dmoj[j] = v;
      }
      else{
        int u;
        cin >> u;
        
        peg[j] =u;
      }
    }
  }
  int out = greedy(peg, dmoj, qType);
  
  cout << out;

}
