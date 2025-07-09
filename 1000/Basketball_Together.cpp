#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, d;
    cin >> n >> d;
    vector<long long> nums(n);
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    long long left = -1;
    long long right= n - 1;
    long long team_Size = 1;
    long long teams = 0;

    while(left < right){
        if((nums[right] * team_Size) <= d && left < right){
            left++;
            team_Size++;
        }else{
            teams++;
            right--;
            team_Size = 1;
        }
    }
    cout << teams << endl;
    return 0;
}