#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;

    // 1 2 2 -4 -->  1 2
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    if (s.size() < 2)
    {
        cout << "NO";
    }
    else
    {
        // 1 2
        s.erase(s.begin());
        cout << *s.begin();

        //-4 1 2 
        // cout<<*next(s.begin());
    }
}