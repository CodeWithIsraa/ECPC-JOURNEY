#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool ok = true;
        for (int i = 2; i < n; i++)
        {
            if (a[i] % 2 != a[i - 2] % 2)
            {
                ok = false;
            }
        }

        if (ok)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
