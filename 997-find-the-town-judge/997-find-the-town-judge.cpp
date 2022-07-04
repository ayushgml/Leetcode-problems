class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,vector<int>> ump;
        unordered_map<int,int> count_ump;
        for(int i=0;i<trust.size();i++){
            ump[trust[i][0]].push_back(trust[i][1]);
            count_ump[trust[i][1]]++;
        }
        int judge = -1;
        for(int i=1;i<=n;i++){
            if(ump[i].size()==0){
                judge = i;
            }   
        }
        if(judge>0 && count_ump[judge]==n-1) return judge;
        
        return -1;
    }
};