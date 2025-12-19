#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin >> nums[i];
        }

        sort(nums.rbegin(), nums.rend());

        for(auto it : nums){
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}