#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin >> nums[i];
        }

        int ans = INT_MIN;
        for(int i=0;i<n;i++){
            int sum = nums[i];
            for(int j=i+1;j<n;j++){
                sum += nums[j];
                ans = max(ans, sum / (j - i + 1));
            }
        }
        cout << ans << endl;
    }
    return 0;
}