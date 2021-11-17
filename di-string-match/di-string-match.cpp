class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> v;
        int n=s.length();
        int p=0;
        int q=n;
        if(s[0]=='I'){
            v.push_back(p++);
            for(int i=1;i<n;i++){
                if(s[i]=='D'){
                    v.push_back(q--);
                }
                else{
                    v.push_back(p++);
                }
            }
            v.push_back(p);
        }
        else if(s[0]=='D'){
            v.push_back(q--);
            for(int i=1;i<n;i++){
                if(s[i]=='D'){
                    v.push_back(q--);
                }
                else{
                    v.push_back(p++);
                }
            }
            v.push_back(q);
        }
        
        return v;
    }
};