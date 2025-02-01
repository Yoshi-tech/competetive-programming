#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  
  int n; 
  cin >> n;
  
  vector<int> numbers(n);
  vector <int> checker(n);
  for(int i = 0; i < n; i++){
    int v;
    cin >> v;
    
    numbers[i] = v;
  }
  
  int counter = 0;
  
  for(int i = 0; i < n; i++){
    counter += numbers[i];
    if(numbers[i] == 0){
      for(int j = i-1; j >= 0; j--){
        if(numbers[j] != 0){
          if(!checker[j]){
            counter -= numbers[j];
            checker[j] = 1;
          
            break;
          }

        }
      }
    }
  }
  
  cout << counter;
}
