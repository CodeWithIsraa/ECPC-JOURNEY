#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool comp(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    if (a.second > b.second)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin >> n;

    vector<pair<ll, ll>> a;
    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i].first >> a[i].second;
    }

    sort(a.begin(), a.end(), comp);

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i].first << a[i].second;
    }
}