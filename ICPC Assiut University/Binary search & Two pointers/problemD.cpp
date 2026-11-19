#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, k;

bool can(ll mid, vector<ll> &a, vector<ll> &b)
{
    ll needed = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] >= a[i] * mid)
        {
            continue;
        }
        needed += (a[i] * mid) - b[i];
        if (needed > k)
        {
            return false;
        }
    }
    return needed <= k;
}
int main()
{
    cin >> n >> k;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<ll> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    ll l = 0, r = 2e9;
    ll ans = -1;

    while (l <= r)
    {
        ll mid = (r + l) / 2;
        if (can(mid, a, b))
        {
            l = mid + 1;
            ans = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;
}