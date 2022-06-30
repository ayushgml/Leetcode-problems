class Solution {
public:
    int expressiveWords(string s, vector<string>& words) {
        int ans = 0;
        for(int i=0; i<words.size(); i++){
            int j=0, k=0;
            string temp = words[i];
            
            for(; j<s.length() && k<temp.length() ; j++, k++){
                if(s[j] == temp[k]){
                    int counts = 1, counttemp = 1;
                    while(j+1<s.length() && s[j]==s[j+1]){
                        counts++, j++;
                    }
                    while(k+1<temp.length() && temp[k]==temp[k+1]){
                        counttemp++, k++;
                    }
                    if(counts == counttemp || (counttemp<counts && counts>=3)) continue;
                    else break;
                }
                else break;
            }
            if(j==s.length() && k==temp.length())
                ans++;
        }
        return ans;
    }
};