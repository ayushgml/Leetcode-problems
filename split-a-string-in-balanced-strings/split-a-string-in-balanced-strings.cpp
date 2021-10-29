class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0, x=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==s[0]) 
                count++;
            else 
                count--;
            
            if(count == 0) 
                x++;
        }
        return x;
    }
};