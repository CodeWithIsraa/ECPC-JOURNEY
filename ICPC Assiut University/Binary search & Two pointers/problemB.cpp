#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a, b;
    cin >> a;

    vector<ll> v1(a);
    for (int i = 0; i < a; i++)
    {
        cin >> v1[i];
    }
    sort(v1.begin(), v1.end());

    cin>>b;
    vector<ll> v2(b);
    for (int i = 0; i < b; i++)
    {
        cin >> v2[i];
    }

    for (int i = 0; i < b; i++)
    {
        auto it = upper_bound(v1.begin(), v1.end(), v2[i]);
        if (it != v1.end())
        {
            cout << (it - v1.begin()) << endl;
        }
        else
        {
            cout << a << ' ';
        }
    }
}