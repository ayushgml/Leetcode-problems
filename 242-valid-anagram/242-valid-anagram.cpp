class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> ump;
        for(int i=0;i<s.length();i++){
            ump[s[i]]++;
        }
        
        for(int i=0;i<t.length();i++){
            ump[t[i]]--;
        }
        
        for(auto i : ump){
            if(i.second!=0)
                return false;
        }
        return true;
    }
};