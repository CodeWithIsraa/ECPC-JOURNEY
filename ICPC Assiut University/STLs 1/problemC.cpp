#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    queue<ll> q;
    while (t--)
    {
        ll id, n;
        cin >> id >> n;

        if (id == 1)
        {
            q.push(n);
        }
        else
        {
            if (!q.empty())
            {
                cout << "no";
            }
            else
            {
                if (q.front() == n)
                {
                    cout << "yes";
                }
                else
                {
                    cout << "no";
                }
                q.pop();
            }
        }
    }
}