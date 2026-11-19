#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int size;
        cin >> size;

        string path;
        cin >> path;

        int coins = 0;

        for (int i = 0; i < size;i++)
        {
            if (path[i] == '@')
            {
                coins++;
            }

            if (i + 2 < size && path[i + 2] != '*')
            {
                i += 2;
            }
            else if (i + 1 < size && path[i + 1] != '*')
            {
                i += 1;
            }
            else
            {
                break;
            }
        }

        cout << coins << endl;
    }
}