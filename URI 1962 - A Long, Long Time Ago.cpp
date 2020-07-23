//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: URI Online Judge | 1962 - A Long, Long Time Ago
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n ;
    while(n--)
        {
            ll year;
            cin >> year;

            if(year <=2014 ) 
            {
                year = (2015 - year);
                cout << year << " D.C.\n";
            }
            else if(year > 2014)  
            {
                year = (year - 2015) +1;
                cout << year << " A.C.\n";
            }
        }

    return 0;
}
