#include <iostream>
#include <vector>

using namespace std;

int tapeMeasure(vector <bool> l1, vector <bool> l2, int &tape){
  for(int i = 1; i < l1.size()-1; i++){
      if(l1[i] == 1){
        if(l1[i-1] == 1){
          tape -= 2;

        }
        if(l1[i+1] == 1){
          tape -= 2;
        }
        
        if(i%2 == 1){
          if(l2[i] == 1){
            tape -=2;
          }
        }
      }
  }
  
  return tape;
}
int main(){
  
  int c;
  int counter = 0;
  int tape;
  cin >> c;
  
  vector <bool> l1(c);
  vector <bool> l2(c);
  
  for (int i = 0; i < 2; i++){
    for(int j = 0; j < c; j++){
      int v;
      cin >> v;
      if(i == 0){
        l1[j] = v;
      }
      else{
        l2[j] = v;
      }
      if(v == 1){
        counter++;
      }
    }
  }
  tape = counter * 3;
  tapeMeasure(l1, l2, tape);
  
  cout << tape;
}
