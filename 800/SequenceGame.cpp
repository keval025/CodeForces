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

        int x;
        cin >> x;

        sort(nums.begin(), nums.end());

        if(x <= nums[n-1] && x >= nums[0]){
            cout << "YES" << endl;
        }else{
            cout << "NO" <<endl;
        }
    }
    return 0;
}