#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<string> matrix;

        for(int i=0;i<n;i++){
            string st;
            cin >> st;
            
            matrix.push_back(st);
        }

        set<int> st;
        for(int i=0;i<n;i++){
            int cnt = 0;
            for(int j=0;j<n;j++){
                if(matrix[i][j] == '1') {
                    cnt++;
                }
            }
            if(cnt != 0){
                st.insert(cnt);
            }
        }

        (st.size() == 1) ? cout << "SQUARE" << endl : cout << "TRIANGLE" << endl;
    }
    return 0;
}