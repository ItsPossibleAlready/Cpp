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
    string s;
    cin >> s;
    int L, R, D, U;
    L = D = R = U = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='U')
            U++;
        if(s[i]=='D')
            D++;
        if(s[i]=='R')
            R++;
        if(s[i]=='L')
            L++;
    }
    cout << min(L, R)*2 + min(U, D)*2;
    return 0;
}
