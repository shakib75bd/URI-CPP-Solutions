//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: URI Online Judge | 1983 - The Chosen
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define dl double

int main()
{
    unsigned n;
    ll count = 0;
    dl temp = 0,temp2 = 0,temp3 = 0;
    cin >> n;
    while(n--)
        {
            ll nmbr;
            dl scr;

            cin >> nmbr;
            cin >> scr;

            if(scr>=8.0) 
            {
                temp2 = max(scr,temp);
                if(scr>temp) temp3 = nmbr;
                else temp3 = temp3;
                temp = temp2;
                count ++;
            }
        }

        if(count==0) cout<<"Minimum note not reached\n";
        else cout<<temp3<<endl;

    return 0;
}
