#include <bits/stdc++.h>
using namespace std;
void solve()
{
    char tar[11][11];
    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 11; j++)
        {
            cin >> tar[i][j];
        }
    }
    int count = 0;
    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 11; j++)
        {
            if (tar[i][j] == 'X')
            {
                if (i <= 5)
                {
                    if (j <= 5)
                        count += min(i, j);
                    else
                        count += min(i, 11 - j);
                }
                else
                {
                    if (j <= 5)
                        count += min(11 - i, j);
                    else
                        count += min(11 - i, 11 - j);
                }
            }
        }
    }
    cout << count << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

return 0;
}