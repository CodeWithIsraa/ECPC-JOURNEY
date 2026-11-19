#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;
    stack<char> st;

    // a<bc<
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '<')
        {
            if (!st.empty())
                st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    vector<char> v;
     while (!st.empty()) 
    {
        v.push_back(st.top());
        st.pop();
    }

    reverse(v.begin(), v.end());

    for (auto i : v)
    {
        cout << i;
    }
}