#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int ans = INT_MIN;
        for(int i=0;i<n;i++){
            ans = max(ans, int(s[i]));
        }
        cout << ans - 96 << endl;
    }
    return 0;
}