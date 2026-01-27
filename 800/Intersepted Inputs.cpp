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

        map<int, int> mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }

        int parity = 0;
        int p, q;
        for(int i=0;i<n;i++){
            int k = (n - 2) / a[i];
            if((n-2) % a[i] == 0 && parity == 0 && mp.find(k) != mp.end()){
                if(k == a[i]){
                    if(mp[a[i]] >= 2){
                        parity = 1;
                        p = a[i];
                        q = k;
                        break;
                    }
                }else{
                    parity = 1;
                    p = a[i];
                    q = k;
                    break;
                }
            }
        }
        cout << p << " " << q << endl;
    }
    return 0;
}