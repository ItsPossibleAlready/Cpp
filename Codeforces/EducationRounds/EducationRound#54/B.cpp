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

ll fn(ll n)
{
    for (int i = 2; i <= sqrt(n);i++)
    {   
        if(n%i==0)
            return i;
    }
    return n;
}

int main()
{
    ll n;
    cin >> n;
    ll k = fn(n);
    n -= k;
    cout << 1+(n/2);
    return 0;
}
