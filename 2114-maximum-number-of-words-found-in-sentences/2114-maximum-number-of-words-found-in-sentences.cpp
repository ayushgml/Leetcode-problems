class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxW=1;
        for(int i=0;i<sentences.size();i++){           
            int word=1;
            for(int j=0;j<sentences[i].length();j++){
                if(sentences[i][j]==' ')
                    word++;
            }
            maxW=max(maxW,word);
        }
        return maxW;
    }
};