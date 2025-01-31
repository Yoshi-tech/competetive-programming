#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

int main(){
  int m, n, u;
  cin >> m >> n >> u;
  vector <vector <bool>> grid(m, vector<bool>(n, 0));
  vector <tuple<char, int>> strokes;
  
  for(int i = 0; i < u; i++){
    char c;
    int v;
    cin >> c >> v;
    strokes.push_back(make_tuple(c,v));
  }
  
  for(int j = 0; j < u; j++){
    char x = get<0>(strokes[j]); // note the use of tuples, this is an insane data structure
    int y = get<1>(strokes[j])-1;
    
    if(x == 'C'){
      for(int i = 0; i < m; i++){
        grid[i][y] = !grid[i][y];
      }
    }
    else{
      for(int i = 0; i < n; i++){
        grid[y][i] = !grid[y][i];
      }
    }
  }
  
  int counter = 0;
  
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      if(grid[i][j]){
        counter++;
      }
    }
  }
  
  cout << counter;
  
  
}
