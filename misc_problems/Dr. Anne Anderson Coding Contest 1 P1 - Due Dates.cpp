#include <iostream>
using namespace std;

int main() {
  
  int m, n;
  
  cin >> n >> m;
  
  if(n > m){
    cout << "relaxed" << endl;
  }
  else if(n+1 == m || n == m){
    cout << "stressed" << endl;
  }
  else{
    cout << "okay" << endl;
  }
    

}
