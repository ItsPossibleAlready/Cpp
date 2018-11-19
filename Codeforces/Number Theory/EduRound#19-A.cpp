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

vector<int> v;

void div(int n)
{
    int p = 2;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            n /= i;
            i--;
        }
    }
}
int main()
{
    int n, k;
    cin >> n >> k;
    div(n);
    if (v.size() < k)
    {
        cout << -1;
        return 0;
    }
    for(int i=0;i<k-1;i++)
    {
        cout<<v[i]<<" ";
    }
    int ans=1;
    for(int i=0;i<v.size();i++)
    {
        cout<<":"<<v[i];
        ans*=v[i];
    }
    cout<<ans;
    return 0;
}
//http://codeforces.com/problemset/problem/797/A