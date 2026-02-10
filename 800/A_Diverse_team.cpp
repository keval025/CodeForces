#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    set<int> st;
    vector<int> ans;

    int cnt = 0;
    for(int i=0;i<n;i++){
        if(st.size() < k){
            st.insert(a[i]);
            if(st.size() == cnt + 1){
                ans.push_back(i+1);
                cnt = st.size();
            }
        }
    }

    if(st.size() != k){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
        for(int i=0;i<k;i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}