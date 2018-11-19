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

int check(int x, int y)
{
    for (int i = 0; i < y;i++)
    {
        bool ch = true;
        int st = 0;
        for (int j = 0; j < x; j++)
        {
            st = y * j + i;
            if (s[st] == 'O')
            {
                ch = false;
                break;
            }
        }
        if(ch==true)
            return 1;
    }
    return 0;
}

void print()
{
    if(check(1,12))
        cout << " 1x12";
    if(check(2,6))
        cout << " 2x6";
    if(check(3,4))
        cout << " 3x4";
    if(check(4,3))
        cout << " 4x3";
    if(check(6,2))
        cout << " 6x2";
    if(check(12,1))
        cout << " 12x1";    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {   
        cin >> s;
        int ans = 0;
        ans += check(1, 12);
        ans += check(2, 6);
        ans += check(3, 4);
        ans += check(4, 3);
        ans += check(6, 2);
        ans += check(12, 1);
        cout << ans;
        print();
        cout << endl;
    }
    return 0;
}
