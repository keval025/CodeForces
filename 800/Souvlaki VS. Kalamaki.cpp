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
        int k = 0;
        for(int i=0;i<n;i++){
            if(nums[i] == 1){
                k = 1;
                break;
            }
        }
        if(k == 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}