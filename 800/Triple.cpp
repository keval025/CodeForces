#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> nums(n);
        map<int, int> mp;

        for(int i=0;i<n;i++){
            cin >> nums[i];
            mp[nums[i]]++;
        }

        int ans = -1;
        for(auto it : mp){
            if(it.second >= 3){
                ans = it.first;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}