// This Code Autometically Generated by jeba Rahman. NOTE: Do not try to copy code, learn yourself
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> sum;
        int n,ans;
        cin >> n;
        if (n % 10 != 0)
        {
            sum.push_back(n % 10);
        }
         ans = n % 10;
        n -= ans;
        if (n % 100 != 0)
        {
            sum.push_back(n % 100);
        }
         ans = n % 100;
        n -= ans;
        if (n % 1000 != 0)
        {
            sum.push_back(n % 1000);
        }
         ans = n % 1000;
        n -= ans;
        if (n % 10000 != 0)
        {
            sum.push_back(n % 10000);
        }
        
        if (n >= 10000 && n % 10000 == 0)
        {
            sum.push_back(n);
        }
        cout << sum.size() << endl;
        for (int i = 0; i < sum.size(); i++)
        {
            cout << sum[i] << " ";
        }

    
    }
    return 0;
}