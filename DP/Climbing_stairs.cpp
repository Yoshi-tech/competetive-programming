/* esseitnally the same code as fibbonacci, except the base cases are shifted once to the right, 
  i.e. n=1 is 1, not 0, and n = 2 is 2 not 1 */

#include <iostream>
#include <vector>

using namespace std;


int fib(long long int n, vector <long long int> &cache){ // passing the cache by reference to increase efficiency
  
  cache[1] = 1;
  cache[2] = 2;
  
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
  vector <long long int> cache(n+1);
  fill(cache.begin(), cache.end(), -1);
  long long int out = fib(n, cache);
  
  cout << out;
}
