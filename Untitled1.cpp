#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long a, b, res1, res2;
        cin >> a >> b;
        if (a < b)
        {
            res1 = a;
        }
        else
        {
            res1 = b;
        }
        res2 = (a + b) / 4;
        if (res1 < (a + b) / 4)
        {
            res2 = res1;
        }
        else
        {
            cout << res2;
        }
      
    
}
  
    return 0;
}
     
