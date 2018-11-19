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
    int n;
    cin >> n;
    int ans = 0;
    ans += n / 100;
    n = n % 100;
    ans += n / 20;
    n = n % 20;
    ans += n / 10;
    n = n % 10;
    ans += n / 5;
    ans += (n % 5);
    cout << ans;
    return 0;
}
