class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> ump1;
        unordered_map<char,int> ump2;
        vector<int> v;
        if(p.length()>s.length())
            return v;
        
        for(int i=0;i<p.length();i++){
            ump1[p[i]]++;
            ump2[s[i]]++;
        }
        
        if(ump1==ump2)
            v.push_back(0);
        
        for(int i=p.length();i<s.length();i++){
            ump2[s[i]]++;
            ump2[s[i-p.length()]]--;
            if(ump2[s[i-p.length()]]<=0)
                ump2.erase(s[i-p.length()]);
            
            if(ump1==ump2)
                v.push_back(i-p.length()+1);
        }
        return v;
        
    }
};