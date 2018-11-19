#include <iostream>
using namespace std;
int p = 0;

int main()
{
    string s;
    int n;
    cin >> n >> s;
    string ans;
    for (int i = 0; i < n; i++)
    {
        if (s[i + 1] < s[i] && p == 0)p = 1;
        else ans += s[i];
    }
    cout << ans;
    return 0;
}
