#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long a, b;
        cin >> a >> b;
        long res = (a < b ? a : b);
        res = (res < (a + b) / 4) ? res : (a + b) / 4;
        cout << res << endl;
    }
    return 0;
    
}
