#include <bits/stdcc+.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=0;i<m;i++){
        cin >> b[i];
    }

    vector<int> preFix(n);
    preFix[0] = a[0];
    for(int i=1;i<n;i++){
        preFix[i] = a[i] + preFix[i-1];
    }

    for(int i=0;i<m;i++){
        int l = 0, r = n - 1;
        int tar = b[i];
        while(l < r){
            int mid = l + (r - l) / 2;
            if(preFix[mid-1] < tar && tar <= preFix[mid+1]){
                if(preFix[mid] == tar){
                    cout << mid + 1 << " " << a[mid] << endl;
                }else{
                    cout << mid + 1 << " " << tar - preFix[mid - 1] << endl;
                }
            }else if(preFix[mid] < tar){
                l = mid + 1;
            }else{
                r = mid - 1;
            }     
        }
    }
    return 0;
}