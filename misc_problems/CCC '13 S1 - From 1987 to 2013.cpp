#include <vector>
#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  n++;

  bool isDistinct= false;
  while(!isDistinct){
    vector <char> dupeFinder(10);
    string s = to_string(n);
    for(int i = 0; i < s.size(); i++){
      int idx = s[i] - '0';
      //cout << "found: " << idx << ' ' << s[i] << endl;
      dupeFinder[idx]++;
    }
    bool isTrue = true;
    for(int i =0; i < 10; i++){
      if(dupeFinder[i] > 1){
        isTrue = false;
        //cout << "breaking at: " << i << endl;
        break;
      }
      else{
        continue;
      }
    }
    if(isTrue){
      isDistinct = true;
      cout << n;
    }
    n++;
  }

  
}
