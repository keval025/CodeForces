#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, f, k;
        cin >> n >> f >> k;

        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        
        int m = a[f-1];
        sort(a.begin(), a.end(), greater<int>());
        
        int parity = 0;
        for(int i=0;i<k;i++){
            if(a[i] == m){
                parity = 1;
            }
        }

        if(a[k-1] == m && a[k] == m){
            parity = 2;
        }

        if(parity == 0){
            cout << "NO" << endl;
        }else if(parity == 1){
            cout << "YES" << endl;
        }else{
            cout << "MAYBE" << endl;
        }
    }
    return 0;
}