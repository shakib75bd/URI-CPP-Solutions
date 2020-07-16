#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c;
    while(1)
    {
        cin >> a;
        if (a==0) break;
        else
        {
            cin >> b >> c;
        }
        long long temp = ( a*b*100) / c ;
        long long ans = sqrt(temp);

        cout << ans <<endl;

    }
    
    return 0;

}
