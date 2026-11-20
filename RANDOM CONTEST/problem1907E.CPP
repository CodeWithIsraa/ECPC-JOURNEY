#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        long long ans = 1;
        while (n > 0)
        {
            long long d = n % 10;
            ans *= (d + 1) * (d + 2) / 2;
            n /= 10;
        }

        cout << ans << endl;
    }
}
