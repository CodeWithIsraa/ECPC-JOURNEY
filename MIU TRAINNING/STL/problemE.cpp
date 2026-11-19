#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    bool f = 0;
    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i].second > v[i+1].second)
        {
            f = 1;
            break;
        }
    }
    if (f)
    {
        cout << "Happy Alex";
    }
    else
        cout << "Poor Alex";
}