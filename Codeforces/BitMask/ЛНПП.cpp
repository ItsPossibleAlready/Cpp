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

string s;

string getString(int cnt)
{
    string p;
    int iter = 0;
    while (cnt)
    {
        if ((cnt)&1)
        {
            p += s[iter];
        }
        cnt = (cnt >> 1);
        iter++;
    }
    return p;
}

bool IsPolydrom(string b)
{
    string d = b;
    reverse(d.begin(), d.end());
    if (d == b)
        return 1;
    else
        return 0;
}

string compareString(string a, string b)
{
    if (IsPolydrom(b))
    {
        return max(a, b);
    }
    else
        return a;
}

int main()
{
    cin >> s;
    int n = s.size();
    string ans;
    for (int i = 0; i < (1 << n); i++)
    {
        string k = getString(i);
        ans = compareString(ans, k);
    }
    cout << ans;
    return 0;
}
// http://codeforces.com/problemset/problem/202/A?locale=ru
