#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, s, m;
        cin >> n >> s >> m;
        int left = 0;
        int right;
        int k = 0;
        while(n > 0){
            int l, r;
            cin >> l >> r;
            right = l;
            int ans = right - left;
            if(ans >= s){
                k = 1;
            }
            left = r;
            n--;
        }
        if(m - left >= s){
            k = 1;
        }

        if(k == 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}