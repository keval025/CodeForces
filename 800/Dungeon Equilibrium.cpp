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

        map<int, int> freq;
        for(auto it : a){
            freq[it]++;
        }

        int cnt = 0;
        for(auto it : freq){
            if(it.second != it.first){
                if(it.second < it.first){
                    cnt += it.second;
                }else{
                    cnt += it.second - it.first;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}