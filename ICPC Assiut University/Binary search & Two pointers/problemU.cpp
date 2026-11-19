#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n ;

    double l = 0, r = 1e9, ans = -1;

    while ((r - l) > 1e-9)
    {
        double mid = (l + r) / 2;
        if (mid * mid <= n)
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
       ans = mid;
    }
    cout << fixed << setprecision(9) << ans << endl;
}