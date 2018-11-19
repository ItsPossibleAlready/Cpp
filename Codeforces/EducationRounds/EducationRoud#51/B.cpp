#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second

typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;

const int INF = 1e9 + 7;
const ll LINF = 1e18 + 3;
const int L = 3 * 100 * 1000 + 256;
const int XL = 1000 * 1000 + 128;

int main()
{
    ll l, r;
    cin >> l >> r;
    cout << "YES" << endl;
    for (ll i = l; i <= r; i += 2)
    {
        cout << i << " " << i + 1 << endl;
    }
    return 0;
}
