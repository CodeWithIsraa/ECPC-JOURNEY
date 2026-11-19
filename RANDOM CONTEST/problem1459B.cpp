#include <bits/stdc++.h>
using namespace std;

bool vis[2005][2005];

int main() {
    int n;
    cin >> n;

    int a = n / 2;
    int b = n - a;
    int ans = 0;

    for (int i = n - a; i <= n + a; i += 2) {
        for (int j = n - b; j <= n + b; j += 2) {
            if (!vis[i][j]) {
                vis[i][j] = true;
                ans++;
            }
        }
    }

    for (int i = n - b; i <= n + b; i += 2) {
        for (int j = n - a; j <= n + a; j += 2) {
            if (!vis[i][j]) {
                vis[i][j] = true;
                ans++;
            }
        }
    }

    cout << ans << endl;
}
