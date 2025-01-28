#include <iostream>
#include <vector>

using namespace std;

int main(){
  int n;
  cin >> n; 
  vector <double> len(n+1);
  vector <double> wid(n);
 
  
  for(int j = 0; j < n+1; j++){
    double v;
    
    cin >> v;
    len[j] = v;
    
      
  }
  
  for(int i = 0; i < n; i++){
    double u;
    
    cin >> u;
    wid[i] = u;
  }
  
  int counter = 0;
  double area = 0;
  for(int i = 0; i < n; i++){
    if(counter < n+1){
      double intr = len[counter] + len[counter+1];
      counter++;
      double ctr = intr /2;
      double final  = ctr*wid[i];
      area += final;
    }
  }
  cout << endl;
  printf("%.1f\n",area);
}
