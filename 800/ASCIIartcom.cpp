#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v(3, 0);
    v[0] = a;
    v[1] = b;
    v[2] = c;

    sort(v.begin(), v.end());

    if(v[2] - v[0] < 10){
        cout << "final" << " " << v[1] << endl;
    }else{
        cout << "check again" << endl;
    }
    return 0;
}