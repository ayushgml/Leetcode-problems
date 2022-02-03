class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> ump;
        int x=0;
        for(auto &i: nums1){
            for(auto &j: nums2)
                ump[i+j]++;
        }
        
        for(auto &k: nums3){
            for(auto &l: nums4){
                if(ump.count(0-k-l)) 
                    x+=ump[0-k-l];
            }
        }
        
        return x;
    }
};