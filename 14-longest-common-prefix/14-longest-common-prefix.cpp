class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s=strs[0];
        for(int i=1;i<strs.size();i++)
        {
            string s1="";
            for(int j=0;j<min(strs[i].length(),s.length());j++)
            {
                if(s[0]!=strs[i][0])
                    return "";
                else if(s[j]!=strs[i][j])
                    break;
                else
                    s1+=s[j];
            }
            s=s1;
        }
        return s;
    }
};