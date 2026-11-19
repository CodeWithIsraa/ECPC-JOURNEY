#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    priority_queue<ll,vector<ll>,greater<ll>>pq;// from min
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        if (s == "push")
        {
            int x;
            cin >> x;
            pq.push(x);
        }
        else if (s == "pop")
        {
            if (!pq.empty())
                pq.pop();
        }
        else if (s == "top")
        {
            if (!pq.empty())
                cout << pq.top()<<endl;
        }
    }
}