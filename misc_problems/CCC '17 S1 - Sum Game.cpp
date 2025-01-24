#include <iostream>
#include <vector>

using namespace std;

int main(){
  int n;
  cin >> n;
  
  vector <int> sw(n);
  vector <int> se(n);
  
  for (int i = 0; i < 2; i++){
    for(int j = 0; j <n; j++){
      if(i == 0){
        int u;
        cin >> u;
        sw[j] = u;
      }
      else{
        int v;
        cin >> v;
        se[j] = v;
      }
    }
  }
  
  int k = 0;
  int sum1 = 0;
  int sum2 = 0;
  for(int i = 0; i < n; ++i){
    sum1 += sw[i];
    sum2 += se[i];
    
    if(sum1 == sum2){
      k = i+1;
     
    }
  }
  
  cout << k;
}
