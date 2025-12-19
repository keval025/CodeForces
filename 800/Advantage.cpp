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

        vector<int> b = a;

        sort(b.begin(), b.end());

        for(int i=0;i<n;i++){
            if(a[i] != b[n-1]){
                a[i] = a[i] - b[n-1];
            }else{
                a[i] = a[i] - b[n-2];
            }
        }

        for(int i=0;i<n;i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}