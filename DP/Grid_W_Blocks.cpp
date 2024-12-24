#include <iostream>
#include <vector>
using namespace std;

int pascal(int w, int h,  vector<vector<int>> &cache){ // passing cache by reference
  bool blocked = 0;
  if (cache[w][h] == -1){ // checking if the square we are currently passing is blocked or not
      return 0;
      blocked = 1;
  }
  if (w == 1 | h == 1){ // base case
      if (blocked == 0){ // making sure we do not override the blocked squares even if they appear on the edges
        return 1;
      }
      else{
        return 0;
      }
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
  int w, h, x;
  
  cin >> w >> h >> x;
  
 vector<vector<int>> cache(w + 1, vector<int>(h + 1, 0)); // cache initialization, (note it is 2D this time)
 
 for (int i = 0; i < x; i++){ // accounting for walls/blocks
   int tempx,tempy;
   
   cin >> tempx >> tempy;
   
   cache[tempx][tempy] = -1;
 }

  
  int out = pascal(w,h, cache);
  
  cout << out;
}
