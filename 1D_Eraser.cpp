#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b;
    cin >> a;
    cin >> b;
    string s;
    cin>>s;
    int solve = 0;
    for (int i = 0; i <= a; i++)
    {
        if (s[i] == 'B')
        {
            solve++;
            i += b - 1;
        }
    }
    cout << solve << endl;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
return 0;
}