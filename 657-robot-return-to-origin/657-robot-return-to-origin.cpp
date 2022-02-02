class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<char,int> ump;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='U')
                ump['U']++;
            else if(moves[i]=='D')
                ump['U']--;
            else if(moves[i]=='L')
                ump['L']++;
            else if(moves[i]=='R')
                ump['L']--;
        }
        if(ump['U']==0 && ump['L']==0)
            return true;
        
        return false;
    }
};