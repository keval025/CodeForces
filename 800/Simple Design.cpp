#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long x;
        int k;
        cin >> x >> k;
        long long ans = x;

        int cnt = 0;
        while(x > 0){
            cnt += x % 10;
            x /= 10;
        }
        if(cnt % k == 0){
            cout << cnt << endl;
            continue;
        }
        int m = cnt % k;
        if(m != 0){
            m = k - m;
        }

        
        cout << finalAns << endl;
    }
    return 0;
}