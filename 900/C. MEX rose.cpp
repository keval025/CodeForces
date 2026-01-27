#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int cnt = 0;
        set<int> st;
        for(int i=0;i<n;i++){
            if(a[i] == k){
                cnt++;
            }

            if(a[i] < k){
                st.insert(a[i]);
            }
        }
        int ans = 0;
        if(k - st.size() > cnt){
            ans = k - st.size();
        }else {
            ans = cnt;
        }

        cout << ans << endl;
    }
    return 0;
}