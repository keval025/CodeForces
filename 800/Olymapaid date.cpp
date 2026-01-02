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

        int k0 = 3;
        int k1 = 1;
        int k2 = 2;
        int k3 = 1;
        int k5 = 1;
        int parity = 0;
        for(int i=0;i<n;i++){
            if(nums[i] == 0) k0--;
            else if(nums[i] == 1) k1--;
            else if(nums[i] == 2) k2--;
            else if(nums[i] == 3) k3--;
            else if(nums[i] == 5) k5--;

            if(k0 <= 0 && k1 <= 0 && k2 <= 0 && k3 <= 0 && k5 <= 0){
                parity = i+1;
                break;
            }
        }
        if(parity == 0){
            cout << "0" << endl;
        }else{
            cout << parity << endl;
        }
    }
    return 0;
}