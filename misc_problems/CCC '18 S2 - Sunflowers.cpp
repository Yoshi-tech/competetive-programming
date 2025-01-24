#include <iostream>
#include<vector> 

using namespace std;

vector <vector <int>> rotator(vector<vector<int>> vec, int n){
  vector <vector <int>> copy = vec; // mapping a 90 degrees rotation
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        int x = j;
        int y = n-1-i;
        vec[x][y] = copy[i][j];
      }
    }
    return vec;
  
}
bool check(vector<vector<int>> &vec, int n) { // when checking rows and columns make two seperate loops
    for (int i = 0; i < n; i++) { // Check rows
        for (int j = 1; j < n; j++) {
            if (vec[i][j] < vec[i][j - 1]) {
                return false; // Row is not sorted
            }
        }
    }
    for (int j = 0; j < n; j++) { // Check columns
        for (int i = 1; i < n; i++) {
            if (vec[i][j] < vec[i - 1][j]) {
                return false; // Column is not sorted
            }
        }
    }
    return true; // Grid satisfies sorted property
}

int main(){
  int n;
  
  cin >> n;
  
  vector <vector<int>> vec(n, vector <int>(n));
  
  for (int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      int u;
      cin >> u; 
      vec[i][j] = u;
    }
  }
  int t = 0;
  while(t < 5){
    if(check(vec,n)){
      for (int i = 0; i , n; i++){
        for(int j = 0; j < n; j++){
          
          cout << vec[i][j] << " ";
        }
        cout << endl;
      }
      break;
    }
    else{
      vec = rotator(vec, n);
    }
    t++;
  }
}











