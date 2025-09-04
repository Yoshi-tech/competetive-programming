#include <iostream>
#include <vector>
 
using namespace std;
 
int main(){
    long long int n;
    
    cin >> n;
    vector <int> arr;
    long long  int counter = 0;
    
    for (int i = 0; i < n; i++){
       long long int v;
        cin >> v;
        
        arr.push_back(v);
    }
    
    for(int i = 0; i < n; i++){
        if(i+1 < n){
            if(arr[i] <= arr[i+1]){
                
            }
            else{
                long long int temp = arr[i] - arr[i+1];
                counter += temp;
                arr[i+1] = arr[i];
            }
        }
    }
    
    cout << counter;
}
