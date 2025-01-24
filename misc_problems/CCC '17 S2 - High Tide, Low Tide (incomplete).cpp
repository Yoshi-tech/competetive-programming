#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> reconstruct(vector<int> vec, vector<int> &ans){
  int size = vec.size();
  int max_val = *max_element(vec.begin(), vec.end());
  int min_val = *min_element(vec.begin(), vec.end());
  if(size == 1){
    ans.push_back(vec[0]);
    return ans;
  }
  if(size == 0){
    return ans;
  }
  
  else if(size % 2 == 0){
    ans.push_back(max_val);
    ans.push_back(min_val);

    vec.erase(remove(vec.begin(), vec.end(), max_val), vec.end());
    vec.erase(remove(vec.begin(), vec.end(), min_val), vec.end());

   return reconstruct(vec, ans);
  }
  else{
    ans.push_back(min_val);
    ans.push_back(max_val);


    vec.erase(remove(vec.begin(), vec.end(), max_val), vec.end());
    vec.erase(remove(vec.begin(), vec.end(), min_val), vec.end());

    return reconstruct(vec, ans);
  }
  
  
}

int main(){
  int n;
  
  cin >> n;
  
  vector <int> vec(n);
  vector <int> ans;
  
  for(int i = 0; i < n; i++){
    int u;
    cin >> u;
    vec[i] = u;
  }
  
  reconstruct(vec, ans);
  
  for(int i = 0; i < n; i++){
    cout << ans[i] << " ";
  }
  
}
