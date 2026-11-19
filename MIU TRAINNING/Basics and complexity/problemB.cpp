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

        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + size);

        bool possible = true;
        for (int i = 0; i < size-1; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                possible = false;
                break;
            }
        }
        if (possible)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}