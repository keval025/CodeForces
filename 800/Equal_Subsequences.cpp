#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        string st;
        for(int i=0;i<k;i++){
            st.push_back('1');
        }
        for(int i=0;i<n-k;i++){
            st.push_back('0');
        }
       
        cout << st << endl;
    }
    return 0;
}