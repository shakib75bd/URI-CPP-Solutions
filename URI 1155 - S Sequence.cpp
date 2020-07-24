//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: URI Online Judge | 1155 - S Sequence
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define dl double
#define st string
#define ch char

int main()
{
    dl sum = 0,a=1,b=2;
    for(int i=1;i<=99;i++)
    {
        sum = a + (1 / b);
        b++;
        a = sum;
    }
    cout << fixed << setprecision(2) << sum << endl;
    
    return 0;
}

//You can also  print 5.19 only if you dont want to code hahahahha
