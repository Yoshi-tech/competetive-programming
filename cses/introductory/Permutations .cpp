#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;

    cin >> n;
    bool isTrue = false;

    if (n == 2 || n == 3){
      cout << "NO SOLUTION";
      isTrue = true;
    }
    vector <int> even;
    vector <int> odd;

    if(!isTrue){
      for(int i = 1; i <= n; i++){
        if(i%2==0){
          even.push_back(i);
      }
        else{
          odd.push_back(i);
        }
      }
        even.insert(even.end(), odd.begin(), odd.end());
    
    
        for(int i =0; i < even.size(); i++){
          cout << even[i] << ' ';
    
        }
    }
  
  }
