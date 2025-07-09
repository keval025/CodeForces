#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, x;
        cin >> n >> x;
        vector<long long> nums(n);
        for(long long i=0;i<n;i++){
            cin >> nums[i];
        }

        vector<pair<long long, long long>> segments(n);
        for(int i=0;i<n;i++){
            segments[i] = {nums[i] - x, nums[i] + x};
        }

        long long ans = 0;
        long long l = segments[0].first;
        long long r = segments[0].second;
        for(int i=1;i<n;++i){
            l = max(l, segments[i].first);
            r = min(r, segments[i].second);
            if(l > r){
                ans++;
                l = segments[i].first;
                r = segments[i].second;
            } 
        }
        cout << ans << endl;
    }
    return 0;
}