#include <iostream>
#include <vector>

using namespace std;

int main(){
  
  int n;
  
  cin >> n;
  
  
  int counter = 0;
  for(int i = 0; i < n; i++){
    int intr = 5*i;
    int test = n-intr;
    
    if(intr <= n){
      if(test%4 == 0){
        counter++;
      }
    }
  }
  
  cout << counter;
}
