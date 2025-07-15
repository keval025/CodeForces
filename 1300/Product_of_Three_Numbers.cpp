#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> fact;
        for(int i=2;i*i<=n;i++){
            if(n % i != 0) continue;
            fact.push_back(i);
            n /= i;
            if(fact.size() == 2){
                break;
            }
        }

        if(n == 1 || fact.size() < 2 || n == fact[0] || n == fact[1]){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
            cout << fact[0] << " " << fact[1] << " " << n << endl;
        }
    }
    return 0;
}