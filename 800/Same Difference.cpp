#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str;
        cin >> str;

        int cnt = 0;
        for(int i=n-2;i>=0;i--){
            if(str[i] != str[n-1]){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}