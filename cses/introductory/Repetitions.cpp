#include <iostream>
#include <string>
 
using namespace std;
 
int main(){
    string s;
    
    cin >> s;
    int max_counter = 1;
    int counter = 1;
    
    for (int i = 0; i < s.size(); i++){
        if (i + 1 < s.size()){
            if(s[i] == s[i+1]){
                counter++;
            }
            else{
                max_counter = max(counter, max_counter);
                counter = 1;
            }
        max_counter = max(counter,max_counter);
    }
    
}
    cout << max_counter;
 
}
