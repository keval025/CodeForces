#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n), diff(n);
        for(int i=0;i<n;++i){
            cin >> a[i];
        }

        int maxDiff = INT_MIN;
        for(int i=0;i<n;++i){
            cin >> b[i];
            diff[i] = a[i] - b[i];
            maxDiff = max(maxDiff, diff[i]);
        }

        vector<int> ans;
        for(int i=0;i<n;++i){
            if(diff[i] == maxDiff){
                ans.push_back(i + 1);
            }
        }

        int m = ans.size();
        cout << m << endl;
        for(int i=0;i<m;++i){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}