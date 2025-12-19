#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long l, r;
        cin >> l >> r;
        long long sum = 1;

        sum += 2 * (int)(log((long double)l) / log(3.0L)) + 1;
        for(long long i = l+1;i<=r;i++){
            sum += (int)(log((long double)i) / log(3.0L)) + 1;
        }

        cout << sum << endl;
    }
    return 0;
}