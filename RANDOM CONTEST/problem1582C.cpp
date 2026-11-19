#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int ans = n + 1;

        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            int l = 0, r = n - 1;
            int erased = 0;
            bool ok = true;

            while (l < r)
            {
                if (s[l] == s[r])
                {
                    l++;
                    r--;
                }
                else if (s[l] == ch)
                {
                    erased++;
                    l++;
                }
                else if (s[r] == ch)
                {
                    erased++;
                    r--;
                }
                else
                {
                    ok = false;
                    break;
                }
            }

            if (ok)
            {
                ans = min(ans, erased);
            }
        }

        if (ans == n + 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}
