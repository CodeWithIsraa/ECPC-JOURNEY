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

        vector<int> a(n);
        a[0] = 1;
        for (int i = 1; i < n; ++i)
        {
            cin >> a[i];
        }

        vector<int> b(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int i = 0, j = 0;
        int matches = 0;

        while (i < n && j < n)
        {
            if (a[i] < b[j])
            {
                matches++;
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }

        cout << n - matches << endl;
    }

}
