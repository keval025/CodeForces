#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string A, B;
        cin >> A >> B;
        long long n = A.size(), m = B.size();

        long long lcs = 0;
        for(long long len = 1;len <= min(n, m);len++){
            for(long long i=0;i + len <= n;i++){
                for(long long j=0;j+len<=m;j++){
                    string extra_A = A.substr(i, len);
                    string extra_B = B.substr(j, len);

                    if(extra_A == extra_B){
                        lcs = max(lcs, len);
                    }
                }
            }
        }        
        long long ops = n + m - 2 * lcs;
        cout << ops << endl;
    }
    return 0;
}