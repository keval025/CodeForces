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

        map<int, string> mp;
        for(int i=0;i<n;i++){
            (i % 2 == 0) ? mp[i] = "red" : mp[i] = "blue";
        }

        int i = 0;
        for(auto &it : mp){
            if(i % 2 == 0){
                it.second = "blue";
                break;
            }else {
                it.second = "red";
                break;
            }

            i++;
        }
        if(i != n){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
    return 0;
}