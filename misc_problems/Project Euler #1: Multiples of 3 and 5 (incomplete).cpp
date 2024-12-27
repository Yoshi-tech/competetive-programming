#include <iostream>
#include <vector>

using namespace std;

int main(){
  int n;
  cin >> n;
  vector <int> l;
  for (int i = 0; i < n; i++){
    int v;
    cin >> v;
    l.push_back(v);
  }
  
  for(int i = 0; i < n; i++){
    int sum = 0;
    for(int j = 0; j <= l[i]; j++){
      if(j%5 == 0){
        sum += j;
      }
      else if(j%3 == 0){
        sum += j;
      }
    }
    cout << sum << endl;
  }
}
