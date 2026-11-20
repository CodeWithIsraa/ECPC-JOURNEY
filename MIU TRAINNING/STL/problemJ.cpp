#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n + 1, 0);
        priority_queue<pair<int, int>> pq;

        pq.push({n, -1});

        for (int i = 1; i <= n; i++) {
            pair<int, int> p = pq.top();
            pq.pop();

            int l = -p.second;
            int r = l + p.first - 1;
            int mid = (l + r) / 2;

            a[mid] = i;

            if (mid > l) {
                pq.push({mid - l, -l});
            }
            if (mid < r) {
                pq.push({r - mid, -(mid + 1)});
            }
        }

        for (int i = 1; i <= n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}