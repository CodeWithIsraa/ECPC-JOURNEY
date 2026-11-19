#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;
    ll count = 0;

    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (!st.empty() && st.top() == s[i])
        {
            count++;
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    if (count % 2 == 0)
    {
        cout << "No";
    }
    else
        cout << "Yes";
}