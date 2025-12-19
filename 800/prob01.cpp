#include<bits/stdc++.h>
#include<numeric>
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

        sort(nums.begin(), nums.end());
        int m = 0;
        for(int i=0;i<n;i++){
            if(nums[i] != i){
                m = i;
                break;
            }
        }

        int cnt = m;
        int k = accumulate(nums.begin(), nums.end(), 0);
        cnt += k;
        cout << cnt << endl;
    }
    return 0;
}