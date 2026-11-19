#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, k;
    cin >> n >> k;

    map<string, string> mp;
    for (int i = 0; i < k; i++)
    {
        string a, b;
        cin >> a >> b;
        mp[a] = b;
    }
    while (n--)
    {
        string x;
        cin >> x;

        if (x.size() > mp[x].size())
        {
            cout << mp[x] << ' ';
        }
        else
        {
            cout << x << ' ';
        }
    }
}