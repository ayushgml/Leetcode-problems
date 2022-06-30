class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string str = "";
        string s = countAndSay(n-1);
        int count = 1;
        for(int i=1;i<s.size();i++){
            if(s[i]!=s[i-1]){
                str+= to_string(count) + s[i-1];
                count = 1;
            }
            else count++;
        }
        str+= to_string(count) + s[s.size()-1];
        return str;
    }
};