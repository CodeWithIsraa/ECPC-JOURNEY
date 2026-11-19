#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        bool r = false, b = false, ok = true;

        for (char c : s) {
            if (c == 'W') {
                if (r != b) {
                    ok = false;
                }

                r = b = 0;

            } else {
                if (c == 'R')
                r = true;
                if (c == 'B') 
                b = true;
            }
        }

        if (r != b) {
            ok = 0;
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}