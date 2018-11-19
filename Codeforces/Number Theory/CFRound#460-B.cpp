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

int cal (int k)
{
    int ret=0;
    while(k)
    {
        ret+=k%10;
        k/=10;
    }
    return ret;
}

int main()
{
    int k;
    cin >> k;
    int ans=18;
    while(k)
    {
        ans++;
        if(cal(ans)==10)k--;
    }
    cout<<ans;
    return 0;
}
//http://codeforces.com/problemset/problem/919/B