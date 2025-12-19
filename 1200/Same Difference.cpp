#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> nums(n);
        for(long long i=0;i<n;i++){
            cin >> nums[i];
        }

        map<long long,long long> mp;
        for(long long i=0;i<n;i++){
            mp[nums[i] - i]++;
        }

        long long cnt = 0;
        for(auto it : mp){
            cnt += (it.second * (it.second - 1)) / 2;
        }

        cout << cnt << endl;
    }
    return 0;
}