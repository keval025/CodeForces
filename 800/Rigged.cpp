#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i=0;i<n;++i){
            cin >> a[i] >> b[i];
        }

        int k = 0;
        for(int i=1;i<n;++i){
            if(a[i] >= a[0] && b[i] >= b[0]){
                k = 1;
            }
        }
        if(k == 1){
            cout << -1 << endl;

        }else{
            cout << a[0] << endl;
        }
    }
    return 0;
}