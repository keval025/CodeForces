#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> nums(n);
        for(int i=0;i<n;i++){
            cin >> nums[i];
        }

        map<long long, long long> freq;
        for(int i=0;i<n;++i){
            freq[nums[i]]++;
        }

        long long flag = 0;
        for(auto it : freq){
            if(it.second == 1){
                flag = 1;
                break;
            }
        }
        if(flag){
            cout << -1 << endl;
            continue;
        }

        vector<long long> students(n);
        for(int i=0;i<n;i++){
            students[i] = i + 1;
        }

        long long l = 0;
        long long r = 0;
        while(r < n){
            if(nums[l] == nums[r]){
                r++;
            }else{
                rotate(students.begin() + l, students.begin() + l + 1, students.begin() + r);
                l = r;
            }
        }
        rotate(students.begin() + l, students.begin() + l + 1, students.begin() + r);

        for(auto i : students){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}