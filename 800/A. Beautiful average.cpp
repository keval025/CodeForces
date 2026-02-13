#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            int cnt = 0;
            for(int j=i;j<n;j++){
                cnt += a[j];

                int m = cnt / (j - i + 1);
                maxi = max(maxi, m);
            }
        }
        cout << maxi << endl;
    }
    return 0;
}