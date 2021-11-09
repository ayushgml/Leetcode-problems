class Solution {
public:
    int romanToInt(string s) {
        map<char,int> m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        m['a']=0;
        int ans=0;
        s=s+"a";
        for(int i=0;i<s.size()-1;i++) {
            if(m[s[i]] < m[s[i+1]]){
                ans=ans-m[s[i]];
            }
            else 
                ans = ans+m[s[i]];
        }
        return ans;
    }
};