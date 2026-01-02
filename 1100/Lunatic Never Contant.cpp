#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> nums(n);

        for(int i=0;i<n;i++){
            cin >> nums[i];
        }

        int ans = 0;
        for(int i=0;i<n;i++){
            ans = __gcd(ans, abs(nums[i] -  nums[n-i-1]));
        }
        cout << ans << endl;
    }
}