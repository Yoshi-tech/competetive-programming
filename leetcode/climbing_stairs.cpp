class Solution {
    int arr[46] = {0};
public:
    int climbStairs(int n) {
        
        if(n == 1 || n == 2){
            return n;
        }
        else {
            if(!arr[n]){
                arr[n] = climbStairs(n-1) + climbStairs(n-2);
            }
            return arr[n];
        }
    }
};
