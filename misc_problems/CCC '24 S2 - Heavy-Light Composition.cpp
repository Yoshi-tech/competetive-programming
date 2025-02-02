#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool compCheck(string s, int n){
  vector <int> dict(26);
  vector <int> alternator(n);
  
  for(int i =0; i < n; i++){
    int intr = s[i] - 'a';
    
    dict[intr]++;
  }
  
  bool alt = true;

  
  for(int i = 0; i < n; i++){
    int intr = s[i] - 'a';
    if(dict[intr] > 1){
      alternator[i] = 1;
    }
    else{
      alternator[i] = 0;
    }
  }
  
  for(int i = 0; i < n-1; i++){
      if(alternator[i] == alternator[i+1]){
        alt = false;
        break;
      }

  }
  
  return alt;
}

int main(){
  int t,n;
  
  cin >> t >> n;
  vector <string> words(t);
  for(int i = 0; i < t; i++){
    string s;
    cin >> s;
    words[i] = s;
    
  }
  
  for(int i = 0; i < t; i++){
    bool check = compCheck(words[i], n);
    
    if(check){
      cout << 'T' << endl;
    }
    else{
      cout << 'F' << endl;
    }
    
  }
}
