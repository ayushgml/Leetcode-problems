class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        unordered_set<int> umpROW;
        unordered_set<int> umpCOL;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    umpROW.insert(i);
                    umpCOL.insert(j);
                }
            }
        }
        
        unordered_set<int> :: iterator i;
        
        for(i=umpROW.begin();i!=umpROW.end();i++){
            for(int j=0;j<n;j++){
                matrix[*i][j]=0;
            }
        }
        
        for(i=umpCOL.begin();i!=umpCOL.end();i++){
            for(int j=0;j<m;j++){
                matrix[j][*i]=0;
            }
        }
        
        
    }
};