#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;

        int cntA = 0;
        int cntB = 0;

        for(int i=0;i<5;i++){
            (str[i] == 'A') ? cntA++ : cntB++;
        }

        (cntA > cntB) ? cout << "A" << endl : cout << "B" << endl;
    }
    return 0;
}