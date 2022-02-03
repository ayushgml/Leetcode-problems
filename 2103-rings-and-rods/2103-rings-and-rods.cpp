class Solution {
public:
    int countPoints(string rings) {
        vector<int> R(10,0);
        vector<int> G(10,0);
        vector<int> B(10,0);
        for(int i=0;i<rings.length();i+=2){
            string s="";
            if(rings[i]=='R'){
                s += rings[i+1];
                int n =stoi(s);
                R[n]=1;
            } else if(rings[i]=='G'){
                s += rings[i+1];
                int n =stoi(s);
                G[n]=1;
            } else if(rings[i]=='B'){
                s += rings[i+1];
                int n =stoi(s);
                B[n]=1;
            }
        }
        int num=0;
        for(int i=0;i<10;i++){
            if(R[i]==1 && G[i]==1 && B[i]==1)
                num++;
        }
        return num;
    }
};