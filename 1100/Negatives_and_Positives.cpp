#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> nums(n);
        for(int i=0;i<n;++i){
            cin >> nums[i];
        }

        long long sum = 0;
        long long negatives = 0;
        long long mini = INT_MAX;
        for(auto it : nums){
            if(it < 0){
                negatives++;
            }
            sum += abs(it);
            mini = min(mini, abs(it));
        }
        if(negatives % 2 == 1){
            sum = sum - 2 * abs(mini);
        }
        cout << sum << endl;
    }
    return 0;
}