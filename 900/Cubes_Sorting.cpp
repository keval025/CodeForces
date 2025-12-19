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

        int cnt = 0;
        for(int i=0;i<n-1;i++){
            if(nums[i] > nums[i+1]){
                cnt++;
            }
        }

        if(cnt == n - 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}