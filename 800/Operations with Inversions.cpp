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

        int cnt = 0;
        int j = 0;
        while(j < n-1){
            if(a[j] > a[j+1]){
                cnt++;
                a[j+1] = a[j];
            }
            j++;
        }
        cout << cnt << endl;
    }
    return 0;
}