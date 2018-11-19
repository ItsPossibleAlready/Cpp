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

int a[1005];
int b[1005];

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int pp = false;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if(i>=m&&a[i]==true)
            pp = true;
    }
    for (int i = 1; i <= n;i++)
    {
        cin >> b[i];
    }
    if(a[1]==0)
    {
        cout << "NO";
    }
    else if(a[m]==0&&b[m]==1)
    {
        cout << "YES";
    }
    else
    {

    }
    return 0;
}