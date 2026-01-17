#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;

        char ch1 = s1[0];
        char ch2 = s2[0];
        s1[0] = ch2;
        s2[0] = ch1;

        cout << s1 << " " << s2 << endl;
    }
    return 0;
}
