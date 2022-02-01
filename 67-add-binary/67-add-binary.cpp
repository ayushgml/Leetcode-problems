class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1;
        int j=b.size()-1;
        int carry=0;
        string s="";
        while(i >= 0 || j >= 0 || carry) {
            if(i>=0){
                carry+=a[i]-'0';
                i--;
            }
            if(j>=0){
                carry+=b[j]-'0';
                j--;
            }
            s.push_back((carry%2)+'0');
            carry/=2;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};