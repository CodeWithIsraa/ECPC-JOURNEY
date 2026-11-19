#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, k;
    cin >> n >> k;

    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    deque<ll> dq;
    map<ll, ll> mp;

    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]] == 0)
        {
            if (dq.size() < k)
            {
                dq.push_front(a[i]);
                mp[a[i]] = 1;
            }
            else
            {
                mp[dq.back()] = 0;
                dq.pop_back();
                dq.push_front(a[i]);
                mp[a[i]] = 1;
            }
        }
    }
    cout << dq.size() << endl;
    for (int i = 0; i < dq.size(); i++)
    {
        cout << dq[i] << ' ';
    }
}