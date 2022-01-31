class Solution {
public:
    
    int maxDepth(string s) {
        unordered_map<char,int> ump;
        int maximum=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                ump['(']++;
                maximum=max(maximum,ump['(']);
            }  
            else if(s[i]==')')
                ump['(']--;
        }
        return maximum;
    }
};