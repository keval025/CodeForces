#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        if(n < k){
            cout << "NO" << endl;
            continue;
        }

        int cnt = 0;
        int parity = 0;
        vector<int> nums(k);
        for(int i=0;i<n;i++){
            if(i < n-1){
                nums[i] = 1;
                cnt++;
            }else{
                nums[i] = n - cnt;
                parity = 1;
            }
        }
        if(parity == 1){
            cout << "YES" << endl;
            for(int i=0;i<n;i++){
                cout << nums[i] << " ";
            }
            cout << endl;
        }
    }
}