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
    int t;
    cin >> t;
    while (t--)
    {
        ld d;
        cin >> d;
        if (d == 1)
        {
            cout << "N" << endl;
            continue;
        }
        if (sqrt(d) == double(int(sqrt(d))))
        {
            cout << "Y "<<sqrt(d) << " " << sqrt(d) << endl;
            continue;
        }
        ld l = d - 1.5;
        ld r = 1.5;
        ld q = 0.25;
        int ch = 0;
        while (l * r != d)
        {
            ch++;
            if (l * r > d)
            {
                if ((l - q) * (r + q) < (l + q) * (r - q))
                {
                    l -= q;
                    r += q;
                }
                else
                {
                    l += q;
                    r -= q;
                }
            }
            else if (l * r < d)
            {
                if ((l - q) * (r + q) > (l + q) * (r - q))
                {
                    l -= q;
                    r += q;
                }
                else
                {
                    l += q;
                    r -= q;
                }
            }
            if (ch == 1000)
            {
                break;
            }
            //cout << l << " " << r << endl;
            q /= 2;
        }
        if (ch == 100)
        {
            cout << "N" << endl;
            continue;
        }
        cout.precision(9);
        cout << fixed <<"Y "<< l << " " << r << endl;
    }
    return 0;
}
