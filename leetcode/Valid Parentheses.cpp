class Solution {
public:
    bool isValid(string s) {
        stack <char> myStack;
        for(int i =0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                myStack.push(s[i]);
            }

            if(myStack.empty()){
                return false;
            }
            char top = myStack.top();
            if ((s[i] == ')' && top == '(') ||
                (s[i] == ']' && top == '[') ||
                (s[i] == '}' && top == '{')) {
                myStack.pop();
            } 
            else if ((s[i] == ')' && top != '(') ||
                (s[i] == ']' && top != '[') ||
                (s[i] == '}' && top != '{')) {
                return false;
            } 
        }


        if(myStack.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};
