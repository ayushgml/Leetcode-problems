class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> ump1;
        for(int i=0;i<chars.size();i++){
            ump1[chars[i]]++;
        }
        int sum=0;
        for(int i=0;i<words.size();i++){
            bool flag = true;
            unordered_map<char,int> ump2=ump1;
            for(int j=0;j<words[i].size();j++){
                ump2[words[i][j]]--;
            }
            for(auto i:ump2){
                if(i.second<0){
                    flag = false;
                    break;
                }       
            }
            if(flag)
                sum+=words[i].size();
        }
        return sum;
    }
};