#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int n;
  
  cin >> n;
  
  vector <int> vec(n);
  vector <int> solution(n);
  
  for(int i = 0; i < n; i++){
    int v;
    cin >> v;
    
    vec[i] = v;
  }
  
  sort(vec.begin(), vec.end());
  vector<int> low(vec.begin(), vec.begin() + n / 2); // First half: Low tides
  vector<int> high(vec.begin() + n / 2, vec.end()); // Second half: High tides
  
  reverse(low.begin(), low.end());
  int low_indx = 0, high_indx = 0;
  for(int i = 0; i < n; i++){
      if(i%2 == 0){

        solution[i] = low[low_indx];
        low_indx++;
      }
      else{
        solution[i] = high[high_indx];
        high_indx++;
      }

    
  }
  
  for(int i = 0; i < n; i++){
    cout <<solution[i] << " ";
  }
}
