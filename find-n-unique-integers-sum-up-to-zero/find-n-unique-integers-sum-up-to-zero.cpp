class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v;
        for(int i=0;i<n;i++){
            if(n%2!=0)
                v.push_back((-1*(n/2))+i);
            else{
                if(i<n/2)
                    v.push_back((-1*(n/2))+i);
                if(i>=n/2)
                    v.push_back((-1*(n/2))+i+1);
            }
        }
        return v;
    }
};