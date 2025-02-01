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
  
  vector <int> dict(25, 0);
  vector <int> dict2(26, 0);
  
  for(int i = 0; i < s.size(); i++){
    int intr = abs(97 - s[i]);
    
    dict[intr]++;
  }
  for(int i = 0; i < s1.size(); i++){
    if(s1[i] == '*'){
      dict2[25]++;
    }
    
    int intr = abs(97 - s1[i]);
    
    dict2[intr]++;
  }
  int counter = 0;
  for(int i = 0; i < 25; i++){
    if(dict2[i] != dict[i]){
      counter += abs(dict[i] - dict2[i]);
      //cout << i << ' ' << "at index: " << i+97 << endl;
    }
  }
  
  if(isTrue){
    if(counter == dict2[25]){
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
