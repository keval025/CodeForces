#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long arr[n];

        for(int i=0;i<n;++i){
            cin >> arr[i];
        }

        long long ans = 0;
        for(int i=1;i<=60;i++){
            set<long long> dist;

            long long k = 1LL << i;

            for(int idx = 0;idx < n;++idx){
                dist.insert(arr[idx] % k);
            }

            if(dist.size() == 2){
                ans = k;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}