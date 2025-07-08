#include <bits/stdc++.h>
using namespace std;

long long lcm(long long num1, long long num2){
    return (num1 * num2) / (gcd(num1, num2));
}

long long sum(long long st, long long end){
    long long ans = ((st + end) * (end - st + 1)) / 2;

    return ans;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n, x, y;
        cin >> n >> x >> y;

        long long c1 = (n / x) - (n / lcm(x, y));
        long long c2 = (n / y) - (n / lcm(x, y));

        long long ans = sum(n - c1 + 1, n) - sum(1LL, c2);

        cout << ans << endl;
    }
    return 0;
}