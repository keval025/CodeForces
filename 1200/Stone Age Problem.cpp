#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    int p = 0;
    int m = 0;
    while(k--){
        int t;
        cin >> t;
        if(t == 1){
            int i, x;
            cin >> i >> x;
            int sum;
            if(p == 1){
                sum = totalSum - m + x;
            }else{
                sum = totalSum - nums[i-1] + x;
            }
            totalSum = sum;
            cout << sum << endl;
        }else{
            int x;
            cin >> x;
            int sum = x * n;
            totalSum = sum;
            p = 1;
            m = x;
            cout << sum << endl; 
        }
    }
    return 0;
}