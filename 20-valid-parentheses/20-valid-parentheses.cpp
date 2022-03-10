class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        stack<char> stk;
        for(int i=0;i<n;i++){
            if(stk.empty())
                stk.push(s[i]);
            else{
                if(stk.top()=='(' && s[i]==')')
                    stk.pop();
                else if(stk.top()=='{' && s[i]=='}')
                    stk.pop();
                else if(stk.top()=='[' && s[i]==']')
                    stk.pop();
                else
                    stk.push(s[i]);
            }
        }
        
        if(stk.empty()) return true;
        
        return false;
    }
};