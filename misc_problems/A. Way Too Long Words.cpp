#include <iostream>

using namespace std;
string foo(string s){
  if(s.size() <= 10){
    return s;
  }
  else{
    int size = s.size()- 2 ;
    string out = s[0] + to_string(size) + s[s.size()-1];
    return out;
  }
}
int main(){
  int n;
  cin >> n;
  for (int i = 0; i< n; i++){
    string s;
    cin >> s;
    
    cout << foo(s) << endl;
  }
}
