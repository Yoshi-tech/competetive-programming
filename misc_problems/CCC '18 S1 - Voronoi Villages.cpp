#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    
    cin >> n;
    vector <double> v(n);
    
    for (int i = 0; i<n; i++){
        double u;
        cin >> u;
        
        v[i] = u;
    }
    
    sort(v.begin(), v.end());
    
    double small = 10000000000000000.0;
    
    for (int j = 1; j < n-1; j++){
        double size;
        
        double leftRaw = (v[j] + v[j-1])/2;
        double rightRaw = (v[j] + v[j+1])/2;
        
        double left = v[j] - leftRaw;
        double right = rightRaw - v[j];
        
        size = left+right;
        
        if(size < small){
            small = size;
        }
    }
    
    
    printf("%.1f\n", small);


}
