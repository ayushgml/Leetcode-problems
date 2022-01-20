class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(),stones.end());
        while(stones.size()>1){
            stones.push_back(stones[stones.size()-1] - stones[stones.size()-2]);
            stones.erase(stones.end()-3,stones.end()-1);
            sort(stones.begin(),stones.end());
        }
        return (stones[0]);
    }
};