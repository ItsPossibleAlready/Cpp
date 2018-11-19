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

int main()
{
    int n;
    cin >> n;
    int ans = 1;
    while (n != 1)
    {
        int ch = false;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                ans += n;
                n = n / i;
                ch = true;
                break;
            }
        }
        if (ch == false)
        {
            ans += n;
            break;
        }
    }
    cout << ans;
    return 0;
}
