class Solution {
public:
    string reversePrefix(string word, char ch) {
        bool mark=false;
        for(int i=0;i<word.length();i++){
            if(word[i]==ch && !mark){
                reverse(word.begin(), word.begin() + i+1);
                mark=true;
            }
        }
        return word;
    }
};