class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string sub = strs[0];
        string answer = "";
        string temp = "";
        bool isFound = 1;
        for(int i =0; i < sub.size(); i++){                
            
            temp += sub[i];
            for(int j =0; j < strs.size(); j++){

                if(!strs[j].starts_with(temp)){
                    isFound = 0;
                    break;
                }
               
            }
            if(isFound){
                answer = temp;
            }
            else{
                break;
            }
        }

        return answer;
    }
};
