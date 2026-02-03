#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);

        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        int parity = 0;
        for(int i=1;i<n;i++){
            if(a[i] % a[0] != 0){
                parity = 1;
            }
        }

        (parity == 0) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}