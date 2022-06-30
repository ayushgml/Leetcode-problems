class Solution {
public:
    string longestPrefix(string s) {
        int n = s.size();
        vector<int> v(n,0);
        for (int i=1; i<n; i++){
            int j = v[i-1];                       
            while (j>=1 && s[j]!=s[i]){
                j = v[j-1];
            }          
            v[i] = j + (s[j]==s[i]);
        }
        int len = v[n-1];
        return s.substr(0, len);
    }
    
};