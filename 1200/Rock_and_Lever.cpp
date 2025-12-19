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

        vector<long long> maxSetbit(31, 0);
        for(int i=0;i<n;++i){
            for(int bit = 30;bit>=0;bit--){
                if((nums[i] & (1 << bit))){
                    maxSetbit[bit]++;
                    break;
                }
            }
        }

        long long ans = 0;
        for(int i=0;i<31;i++){
            ans += (maxSetbit[i] * (maxSetbit[i] - 1)) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}