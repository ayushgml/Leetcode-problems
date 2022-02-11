class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> ump1, ump2;
        int n1 = s1.size();
        int n2 = s2.size();
        if(n1>n2)
            return 0;
        for(int i=0;i<n1;i++){
            ump1[s1[i]]++;
            ump2[s2[i]]++;
        }
        int i=0,j=n1;
        while(j<n2){
            if(ump1==ump2){
                return true;
            }
            else{
                ump2[s2[i]]--;
                if(ump2[s2[i]] == 0)
                    ump2.erase(s2[i]);
                ump2[s2[j]]++;
                i++;
                j++;
            }            
        }
        if(ump1==ump2){
            return true;
        }
        return false;
    }
};