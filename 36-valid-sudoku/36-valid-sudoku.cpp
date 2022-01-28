class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char,int> ump;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    ump[board[i][j]]++;
                }
            }
            for(auto i: ump){
                if(i.second>1)
                    return false;
            }
            ump.clear();
        }
        ump.clear();
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[j][i]!='.'){
                    ump[board[j][i]]++;
                }
            }
            for(auto i: ump){
                if(i.second>1)
                    return false;
            }
            ump.clear();
        }
        
        ump.clear();
        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                for(int k=0;k<3;k++){
                    for(int l=0;l<3;l++){
                        if(board[i+k][j+l]!='.')
                            ump[board[i+k][j+l]]++;
                    }
                }
                for(auto i: ump){
                    if(i.second>1)
                        return false;
                }
                ump.clear();
            }
        }
        return true;
    }
};