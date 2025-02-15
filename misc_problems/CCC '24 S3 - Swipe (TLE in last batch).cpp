#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

tuple <char, int, int> swipe(vector <int> &a, int expected, int i){
  int lptr = i-1;
  int rptr = i+1;
  tuple <char, int, int> sol;
  tuple <char, int, int> nope = make_tuple('N', 0,0);
  bool swipeFound = false;
  while(lptr >= 0){
    if(a[lptr] == expected){
      for(int j =lptr; j < i+1; j++){
        a[j] = expected;
        sol = make_tuple('L', lptr, i);
        swipeFound = true;
        break;
      }
    }

    lptr--;
  }
  
  if(!swipeFound){
   while(rptr < a.size()){
      if(a[rptr] == expected){
        for(int j = i ; j <= rptr; j++){
          a[j] = expected;
          sol = make_tuple('R', i, rptr);
          swipeFound = true;
          break;
        }
      }
      
      rptr++;
     }    
  }
  
  
  if(swipeFound){
    return sol;
  }
  else{
    return nope;
  }
}


int main(){
  int n;
  
  cin >> n;
  
  vector <int> a(n);
  vector <int> b(n);
  vector <tuple <char, int, int>> swipes;
  bool possible = true;
  for(int i =0; i < 2; i++){
    for(int j =0; j < n; j++){
      if(i == 0){
        cin >> a[j];
      }
      else{
        cin >> b[j];
      }
    }
  }
  
  for(int i =0; i < n; i++){
    if(a[i] != b[i]){
      tuple <char, int, int> intr = swipe(a, b[i], i);
      
      if(get<0>(intr) != 'N'){
        swipes.push_back(intr);
      }
      else{
        possible = false;
        break;
      }
    }
  }
  
  if(possible){
    cout << "YES" << endl;
    cout << swipes.size() << endl;
    for(int i =0; i < swipes.size(); i++){
      cout << get<0>(swipes[i]) << ' ' <<  get<1>(swipes[i]) << ' ' <<  get<2>(swipes[i]) << endl;
  }
  
}

  else{
    cout << "NO" << endl;
  }





}
