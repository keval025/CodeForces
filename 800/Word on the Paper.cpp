#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<string> grid(8);
        for (int i = 0; i < 8; i++)
            cin >> grid[i];

        string word = "";

        // Iterate column by column
        for (int col = 0; col < 8; col++) {
            string temp = "";
            for (int row = 0; row < 8; row++) {
                if (grid[row][col] != '.')
                    temp += grid[row][col];
            }
            if (!temp.empty()) {
                word = temp;
                break;
            }
        }

        cout << word << "\n";
    }

    return 0;
}
