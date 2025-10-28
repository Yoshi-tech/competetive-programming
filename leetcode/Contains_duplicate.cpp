class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> lookup;
        for(int i =0; i < nums.size(); i++){
            lookup.insert(nums[i]);
        }
        
        if(nums.size() == lookup.size()){
            return false;
        }
        else{
            return true;
        }
    }
};
