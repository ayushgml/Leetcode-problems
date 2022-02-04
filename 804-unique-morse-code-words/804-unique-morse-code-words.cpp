class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string s = "abcdefghijklmnopqrstuvwxyz";
        vector<string> a = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<char,string> ump;
        for(int i=0;i<a.size();i++){
            ump[s[i]]=a[i];
        }
        unordered_map<string,int> umpNEW;
        for(int i=0;i<words.size();i++){
            string str;
            for(int j=0;j<words[i].size();j++){
                str+=ump[words[i][j]];
            }
            umpNEW[str]++;
        }
        
        return umpNEW.size();
    }
};