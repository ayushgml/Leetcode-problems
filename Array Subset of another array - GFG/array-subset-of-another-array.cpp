// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends

// [1,7,2,1,5,12,5,5]
// [6,3,9]
string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int,int> ump;
    for(int i=0;i<n;i++){
        ump[a1[i]]++;
    }
    for(int i=0;i<m;i++){
        ump[a2[i]]--;
    }

    for(pair<int,int> element : ump){
        if(element.second<0)
            return "No";
    }
    return "Yes";
}