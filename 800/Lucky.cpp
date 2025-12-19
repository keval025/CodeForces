#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string st;
        cin >> st;
        int cnt1 = 0;
        int cnt2 = 0;
        int i = 0, j=5;
        while(i < j){
            cnt1 += st[i] - '0';
            cnt2 += st[j] - '0';
            i++;
            j--;
        }

        if(cnt1 == cnt2){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
}