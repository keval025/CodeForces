#include <bits/stdc++.h>
using namespace std;

string solve(string s){
    for (char &c : s) {
        c = toupper(c);
    }

    if (s == "YES")
        return "YES";
    else
        return "NO";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        cout << solve(s) << endl;
    }
    return 0;
}