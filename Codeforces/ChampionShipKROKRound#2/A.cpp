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
const int N = 100 * 1000 + 256;

int a[N];

int main()
{
    int n;
    cin >> n;
    int mn = INF;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        mn = min(a[i], mn);
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] % mn != 0)
        {
            cout << -1;
            return 0;
        }
    }
    cout << mn;
    return 0;
}
