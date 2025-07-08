#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        vector<pair<int, int>> a;
        for(int i=0;i<n;i++){
            vector<int> v;
            int m; 
            cin >> m;
            for(int j=0;j<m;++j){
                int x;
                cin >> x;
                v.push_back(x - j + 1);
            }
            sort(v.begin(), v.end());
            a.push_back({v[m-1], m});
        }
        sort(a.begin(), a.end());
        int ans = a[0].first;
        int inc = a[0].second;
        for(int i=1;i<n;++i){
            ans = max(ans, a[i].first - inc);
            inc += a[i].second;
        }
        cout << ans << endl;
    }
    return 0;
}