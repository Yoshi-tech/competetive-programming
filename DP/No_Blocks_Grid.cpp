#include <iostream>
#include <vector>
using namespace std;

int pascal(int w, int h,  vector<vector<int>> &cache){ // passing cache by reference
  
  if (w == 1 | h == 1){ // base case
    return 1;
  }
 
  if (cache[w][h] != 0){
    return cache[w][h]; // check with cache if already solved
  }
  else{
    cache[w][h] = pascal(w-1, h, cache) + pascal(w, h-1, cache); // recursive call
    return cache[w][h];
  }
  
}

int main (){
  int w, h;
  
  cin >> w >> h;
  
 vector<vector<int>> cache(w + 1, vector<int>(h + 1, 0)); // cache initialization, (note it is 2D this time)

  
  int out = pascal(w,h, cache);
  
  cout << out;
}
