#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int q;
    cin >> q;
    stack<ll> st;
    while (q--)
    {
        string s;
        cin >> s;
        if (s == "push")
        {
            int x;
            cin >> x;
            st.push(x);
        }
        else if (s == "pop")
        {
            if (!st.empty())
                st.pop();
        }
        else
        {
            if (!st.empty())
                cout << st.top() << endl;
        }
    }
}