#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<string, ll> mp;

    for (int i = n - 1; i >= 0; i--)
    {
        if (mp[a[i]] == 0)
        {
            cout << a[i]<<endl;
            mp[a[i]] = 1;
        }
    }
}