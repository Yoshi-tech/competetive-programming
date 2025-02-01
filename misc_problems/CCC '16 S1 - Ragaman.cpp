#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
  
  string s, s1;
  
  cin >> s >> s1;
  bool isTrue = true;
  
  if(s1.size() != s.size()){
    isTrue = false;
  }
  
  vector <int> dict(26, 0); // size needed to be 26 not 25, simple silly mistake
  vector <int> dict2(27, 0);
  
  for(int i = 0; i < s.size(); i++){
    int intr = abs(97 - s[i]);
    
    dict[intr]++;
  }
  for(int i = 0; i < s1.size(); i++){
    if(s1[i] == '*'){
      dict2[26]++;
      
    }
    else{
      int intr = abs(97 - s1[i]);
    
      dict2[intr]++;
    }
  }
  
  int counter = 0;
  for(int i = 0; i < 26; i++){
    if(dict2[i] != dict[i]){
      counter += abs(dict[i] - dict2[i]);
    }
  }
  
  if(isTrue){
    if(counter == dict2[26]){
      cout << 'A';
    }
    else{
      cout << 'N';
    }
  
  }
  else{
    cout << 'N';
 }
  
}
