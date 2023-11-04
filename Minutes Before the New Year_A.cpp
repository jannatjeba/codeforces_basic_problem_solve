#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h, m, test ;
    cin >> test;
    while (test--)
    {
        cin >> h >> m;
        int day = 24 * 60;
        int convert = h * 60+m ;
        int time = day - convert;
        cout << time << endl;
    }
    return 0;
}
