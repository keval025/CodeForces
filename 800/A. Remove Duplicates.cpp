#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    set<int> st;
    vector<int> ans;
    for(int i=n-1;i>=0;i--){
        if(st.find(a[i]) == st.end()){
            ans.push_back(a[i]);
            st.insert(a[i]);
        }
        st.insert(a[i]);
    }

    reverse(ans.begin(), ans.end());

    cout << ans.size() << endl;
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }

    cout << endl;
}