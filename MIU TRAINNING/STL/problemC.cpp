#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    map<string, ll> mp;
    while (t--)
    {
        string s;//eyad eyad eyad
        cin >> s;

        if (mp[s] != 0)
        {
            cout << s << mp[s] << endl;//eyad2
            mp[s]++;//2 3
        }
        else
        {
            cout << "OK" << endl;//ok
            mp[s]=1;
        }
    }
}