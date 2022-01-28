class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        unordered_map<int,int> ump;
        for(int i=0;i<tops.size();i++){
            ump[tops[i]]++;
            ump[bottoms[i]]++;
        }
        int max=tops.size();
        int maxElement=0;
        for(auto i : ump){
            if(i.second>=max){
                max=i.second;
                maxElement=i.first;
                break;
            }
        }
        
        int num=0;
        for(int i=0;i<tops.size();i++){
            if(tops[i]!=maxElement && bottoms[i]!=maxElement){
                return -1;
            }
            if(tops[i]==maxElement && bottoms[i]==maxElement)
                num++;
        }
        int a=count(tops.begin(),tops.end(),maxElement);
        int b=count(bottoms.begin(),bottoms.end(),maxElement);
        return (min(a,b) - num);
        return 0;
    }
};