#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for(int i=0;i<n;++i){
            cin >> v[i];
        }

        vector<int> colors[k + 1];
        for(int i=1;i<=k;++i){
            colors[i].push_back(0);
        }

        for(int i=0;i<n;++i){
            colors[v[i]].push_back(i + 1);
        }

        for(int i=1;i<=k;++i){
            colors[i].push_back(n + 1);
        }

        priority_queue<int> jumps[k + 1];
        int ans = INT_MAX;
        for(int i=1;i<=k;++i){
            for(int j=0;j<colors[i].size() - 1;++j){
                jumps[i].push(colors[i][j+1] - colors[i][j] - 1);
            }
            int max_val = jumps[i].top();
            jumps[i].pop();

            if(max_val % 2 == 0){
                jumps[i].push(max_val / 2);
                jumps[i].push((max_val / 2) - 1);
            }else{
                jumps[i].push(max_val / 2);
                jumps[i].push(max_val / 2);                
            }
            ans = min(ans, jumps[i].top());
        }
        cout << ans << endl;
    }
    return 0;
}