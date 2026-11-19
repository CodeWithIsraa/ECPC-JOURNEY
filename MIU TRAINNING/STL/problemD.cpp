#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, c;
    cin >> a >> b >> c;

    string c2 = a + b;

    sort(c2.begin(), c2.end());

    sort(c.begin(), c.end());

    if (c2 == c)
        cout << "YES";

    else
        cout << "NO";

    return 0;
}