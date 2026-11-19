#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> count(m, 0);

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            count[x % m]++;
        }

        int groups = 0;

        if (count[0] > 0)
        {
            groups++;
        }

        for (int r = 1; r <= m / 2; r++)
        {
            int partner = m - r;

            if (r == partner)
            {
                if (count[r] > 0)
                {
                    groups++;
                }
            }
            else
            {
                int a = count[r];
                int b = count[partner];

                if (a > 0 || b > 0)
                {
                    if (a == b)
                    {
                        groups += 1;
                    }
                    else
                    {
                        groups += max(a, b) - min(a, b);
                    }
                }
            }
        }

        cout << groups << endl;
    }

    return 0;
}
