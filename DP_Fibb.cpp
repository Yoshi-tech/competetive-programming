#include <iostream>
#include <vector>

using namespace std;


int fib(long long int n, vector <long long int> &cache){ // passing the cache by reference to increase efficiency
  
  cache[1] = 0;
  cache[2] = 1;
  
  if (cache[n] != -1 ){
    return cache[n];
  }
  else {
    cache[n] = fib(n-1, cache) + fib(n-2, cache);
    return cache[n];
    
  }
}

int main(){
  long long int n;
  
  cin >> n;
  vector <long long int> cache(n+1); // cache initialization (for reduction of recursive calls)
  fill(cache.begin(), cache.end(), -1); // filling the cache with -1 in order to show uninitialized values
  long long int out = fib(n, cache);
  
  cout << out;
}
