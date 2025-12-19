#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> nums(n);
        for(int i=0;i<n;++i){
            cin >> nums[i];
        }

        map<int, int> mp;
        for(auto it : nums){
            mp[it]++;
        }

        int cnt = 0;
        for(auto it : mp){
            cnt += (it.second / 2);
        }
        cout << cnt << endl;
    }
    return 0;
}