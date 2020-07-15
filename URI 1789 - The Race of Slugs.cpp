#include <bits/stdc++.h>
using namespace std;

int main()
{
    int L,v;
    
    while(cin >>L)
    {
        int count=0;
        while(L--)
        {
            cin >> v;
            if(v>count) count = v; 
        }
        if(count < 10 ) cout<< "1\n";
        else if(count>=10 && count<20) cout<< "2\n";
        else if(count>=20) cout<<"3\n";
       
    }

    return 0;

}
