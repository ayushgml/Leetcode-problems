class Solution {
public:
    string defangIPaddr(string address) {
        int n=address.size();
        string s;
        for(int i=0;i<n;i++){
            if(address[i]!='.')
                s+=address[i];
            else
                s+="[.]";
        }
        return s;
    }
};