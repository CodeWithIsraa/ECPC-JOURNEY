#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<pair<int, int>> a(n), b(n), c(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i].first;
            a[i].second = i;
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i].first;
            b[i].second = i;
        }
        for (int i = 0; i < n; ++i) {
            cin >> c[i].first;
            c[i].second = i;
        }
        
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        sort(c.rbegin(), c.rend());
        
        int maxx = 0;
        
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                for (int k = 0; k < 3; ++k) {
                    int daya = a[i].second;
                    int dayb = b[j].second;
                    int dayc = c[k].second;
                    
                    if (daya != dayb && dayb != dayc && daya != dayc) {
                        maxx = max(maxx, a[i].first + b[j].first + c[k].first);
                    }
                }
            }
        }
        
        cout << maxx << endl;
    }
    
    return 0;
}
