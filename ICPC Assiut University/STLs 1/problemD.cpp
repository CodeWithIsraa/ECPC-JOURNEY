#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    deque<ll> dq;
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        if (s == "push_back")
        {
            ll x;
            cin >> x;
            dq.push_back(x);
        }
        else if (s == "push_front")
        {
            ll x;
            cin >> x;
            dq.push_front(x);
        }
        else if (s == "pop_front")
        {
            if (!dq.empty())
                dq.pop_front();
        }
        else if (s == "pop_back")
        {
            if (!dq.empty())
                dq.pop_back();
        }
        else if (s == "front")
        {
            if (!dq.empty())
                cout << dq.front() << endl;
        }
        else if (s == "back")
        {
            if (!dq.empty())
                cout << dq.back() << endl;
        }
        else
        {
            ll x;
            cin >> x;
            cout << dq[x] << endl;
        }
    }
}