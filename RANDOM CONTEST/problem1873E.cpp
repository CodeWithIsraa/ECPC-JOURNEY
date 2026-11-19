#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long x;
        cin >> n >> x;

        vector<long long> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        long long low = 1, high = 2000000007LL, ans = 1;

        while (low <= high)
        {
            long long mid = (high + low) / 2;
            long long water = 0;

            for (int i = 0; i < n; ++i)
            {
                if (mid > a[i])
                {
                    water += (mid - a[i]);
                    if (water > x)
                        break;
                }
            }

            if (water <= x)
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
