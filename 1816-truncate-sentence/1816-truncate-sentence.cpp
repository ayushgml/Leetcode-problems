class Solution {
public:
    string truncateSentence(string s, int k) {
        int m=0;
        int n=s.size();
        int j=0;
        for(int i=0;i<=n;i++){
            if(s[i]==' ' || i==n){
                m++;
            }
            if(m==k){
                j=i;
                break;
            }
        }
        return (s.substr(0,j));
    }
};