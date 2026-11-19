#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        int zeros = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                zeros++;
            }
        }
        
        if (zeros == 1 || zeros % 2 == 0) {
            cout << "BOB"<<endl;
        } else {
            cout << "ALICE"<<endl;
        }
    }
    
    return 0;
}
