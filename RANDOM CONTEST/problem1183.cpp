#include <bits/stdc++.h>
using namespace std;

int main() {

    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;

        vector<int> cnt(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            cnt[x]++;
        }

    
        sort(cnt.rbegin(), cnt.rend());

        long long ans = 0;
        int last = n + 1;

        for (int f : cnt) {
            if (f == 0 || last <= 1) break;
            
            int take = min(f, last - 1);
            ans += take;
            last = take;
        }

        cout << ans << endl;
    }

    return 0;
}
