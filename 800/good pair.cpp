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

        int min1 = INT_MAX;
        int max1 = INT_MIN;
        int a1, a2;
        for(int i=0;i<n;i++){
            if(a[i] < min1){
               a1 = i+1;
               min1 = a[i];
            }
            
            if(a[i] > max1){
                a2 = i+1;
                max1 = a[i];
            }
        }
        cout << a1 << " " << a2 << endl;

    }
    return 0;
}