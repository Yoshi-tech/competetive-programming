#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> roundChecker(vector<int> &people, int m){
  vector<int> intermediary(people.size());
  for(int i = 1; i < intermediary.size(); i++){
      if((i+1)%m == 0){
        intermediary[i] = 1;
      }

  }
  
  for(int i = intermediary.size()-1; i >= 0; i--){ // always iterate backwards when erasing elements EVER
    if(intermediary[i]){
      people.erase(people.begin() + i);

    }
  }
  
  return people;
 
}


int main(){
  int k, m;
  cin >> k >> m;
  vector<int> people(k+1);
  vector <int> rounds(m);
  
  for(int i = 0; i < m; i++){
    int v;
    cin >> v;
    rounds[i] = v;
  }
  for(int i = 0; i < k; i++){
    people[i] = i+1;
  }
  
  for(int i = 0; i < m; i++){
    roundChecker(people, rounds[i]);
  }
  
  for(int i = 0; i < people.size(); i++){
    
    if(people[i] != 0){
      cout << people[i] << endl;
    }
  }
}
