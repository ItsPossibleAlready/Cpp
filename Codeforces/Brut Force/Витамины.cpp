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

ll n;
ll Amn = INF;
ll Bmn = INF;
ll Cmn = INF;
ll ABmn = INF;
ll ACmn = INF;
ll BCmn = INF;
ll ABCmn = INF;

int main()
{
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        ll h;
        cin >> h;
        string k;
        cin >> k;
        bool A = false, B = false, C = false;
        for (ll i = 0; i < k.size(); i++)
        {
            if (k[i] == 'A')
                A = true;
            if (k[i] == 'B')
                B = true;
            if (k[i] == 'C')
                C = true;
        }
        if (A == true)
            Amn = min(h, Amn);
        if (B == true)
            Bmn = min(h, Bmn);
        if (C == true)
            Cmn = min(h, Cmn);

        if (A == true && B == true)
            ABmn = min(h, ABmn);
        if (A == true && C == true)
            ACmn = min(h, ACmn);
        if (B == true && C == true)
            BCmn = min(h, BCmn);

        if (A == true && B == true && C == true)
            ABCmn = min(h, ABCmn);
    }
    ll h = min(min(Amn + Bmn + Cmn, ABCmn), min(min(ABmn + Cmn, ACmn + Bmn), BCmn + Amn));
    if (h >= INF)
        cout << -1;
    else
        cout << h;
        
    return 0;
}
// http://codeforces.com/problemset/problem/1042/B?locale=ru