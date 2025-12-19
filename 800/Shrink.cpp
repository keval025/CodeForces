#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> nums(n);

        nums[0] = 1;
        for(int i=1;i<n;i++){
            nums[i] = n - i + 1;
        }

        for(int i=0;i<n;++i){
            cout << nums[i] << " ";
        }
        cout << endl;
    }
    return 0;
}