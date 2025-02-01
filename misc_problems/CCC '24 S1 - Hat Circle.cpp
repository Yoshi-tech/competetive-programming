#include <iostream>
#include <vector>

using namespace std;

int main(){
  
  int n; 
  cin >> n;
  
  vector<int> people(n);
  
  for(int i = 0; i < n; i++){
    int v;
    cin >> v;
    
    people[i] = v;
    
  }
  int counter = 0;
  for(int i = 0; i < n; i++){
    if(i+n/2 < n){
      if(people[i] == people[i+n/2]){
        counter += 2;
      }
    }
  }
  
  cout << counter;
}
