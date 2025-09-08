class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 1;
        int prevAns = 1;
        for(int i = 0; i < nums.size(); i++){
            if(i != 0){
                if(nums[i-1] +1 == nums[i]){
                    ans++;
                }
                else if(nums[i] == nums[i-1]){
                    
                }
                else{
                    if(prevAns < ans){
                        prevAns = ans;
                    }
                    ans = 1;
                }
            }
        }
        if(nums.size() == 0){
            return 0;
        }
        else if(prevAns > ans){
            return prevAns;
        }
        else{
            return ans;
        }
    }
};
