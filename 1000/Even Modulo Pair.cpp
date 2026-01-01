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

        int odds = 0;
        int evens = 0;
        for(int i=0;i<n;i++){
            if(nums[i] % 2 == 0){
                evens++;
            }else{
                odds++;
            }
        }

        
    }
    return 0;
}