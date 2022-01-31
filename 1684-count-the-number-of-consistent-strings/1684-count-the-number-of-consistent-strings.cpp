class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int> ump;
        for(int i=0;i<allowed.length();i++){
            ump[allowed[i]]=1;
        }
        
        int consistent=0;
        for(int i=0;i<words.size();i++){
            bool flag=true;
            for(int j=0;j<words[i].length();j++){
                if(ump[words[i][j]]==0)
                    flag=false;
            }
            if(flag)
                consistent++;
        }
        return consistent;
    }
};