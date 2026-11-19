#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;


        long long steps = k - 1;
        long long bumps = 0;

        if (n % 2 == 1) {
            bumps = steps / (n / 2);
        }

        long long total= steps + bumps;

        
        long long final = (total% n) + 1;

        cout << final << endl;
    }
}
