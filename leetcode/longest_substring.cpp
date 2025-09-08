class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector <char> strs;
        set <char> strs_set;
        int max =0;
        for(int i =0; i < s.size(); i++){

            if(strs_set.find(s[i]) != strs_set.end()){
                
                char check = ' ';
                while(check != s[i]){
                    check = strs[0];
                    strs.erase(strs.begin());
                    strs_set.erase(check);
                }
            }
                strs.push_back(s[i]);
                strs_set.insert(s[i]);

                if(strs_set.size() > max){
                    max = strs_set.size();
                }

                //strs_set.erase(s[i]);
            
        }

        return max;
    }
};
