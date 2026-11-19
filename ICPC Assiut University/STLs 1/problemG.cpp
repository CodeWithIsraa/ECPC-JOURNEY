#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;

    queue<ll> q; // 3 4 5 6 7 2
    for (int i = 0; i <= n; i++)
    {
        q.push(i);
    }

    while (q.size() != 1)
    {
        cout << q.front() << ' ';
        q.push(q.front());
        q.pop();
    }
    cout << endl;
    cout << q.front();
}