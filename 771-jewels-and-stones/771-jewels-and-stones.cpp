class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> ump;
        for(int i=0;i<jewels.size();i++){
            ump[jewels[i]]=1;
        }
        
        int count = 0;
        for(int i=0;i<stones.size();i++){
            if(ump[stones[i]]==1) count++;
        }
        return count;
    }
};