#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        vector<string> grid(8);
        // read possible empty line before test case
        for (int i = 0; i < 8; ) {
            string s;
            cin >> s;
            if (!s.empty()) {
                grid[i++] = s;
            }
        }

        bool red_full_row = false;
        for (int i = 0; i < 8; i++) {
            if (grid[i] == "RRRRRRRR") {
                red_full_row = true;
                break;
            }
        }

        if (red_full_row)
            cout << "R\n";
        else
            cout << "B\n";
    }

    return 0;
}
