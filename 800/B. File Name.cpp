#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string str;
    cin >> str;

    int cnt = 0;
    
    int i=0,j=0;
    while(j < n){
        if(str[i] == 'x' && str[j] == 'x'){
            j++;
        }else if(str[i] == 'x' && str[j] != 'x'){
            if(j - i >= 3){
                cnt += j - i - 2;
            }
            i = j;
        }else{
            i++;
            j++;
        }
    }
    if(j - i >= 3){
        cnt += j - i - 2;
    }
    cout << cnt << endl;
}