#include <iostream>

using namespace std;

int main(){
  long int s, t, out;
  
  cin >> s >> t;
  
  long int sum = s*t;
  long int temp = t+1;
  out = temp*80 - sum;
  if (out > 100){
    cout << -1;
  }
  else if (out <= 0){
    cout << 0;
  }
  else{
    cout << out;
  }
}
