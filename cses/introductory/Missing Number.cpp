#include <iostream>
#include <vector>
 
using namespace std;
 
int main(){
    
    int n;
    
    cin >> n;
    
    vector <bool> check(n+1);
    
    for(int i = 0; i < n-1; i++){
        int v;
        cin >> v;
        if (check[v] == 0){
            check[v] = 1;
        }
    }
    
    for (int i = 1; i < check.size(); i++){
        if (check[i] == 0){
            cout << i;
        }
    }
    
}
