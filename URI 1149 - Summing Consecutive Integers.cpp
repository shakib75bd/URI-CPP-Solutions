//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: URI Online Judge | 1149 - Summing Consecutive Integers
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, n;
    cin >> a ;
    while(n<=0) cin >> n;

    int temp = n-1, temp2 = a+1, temp3 = 0;
    for(int i=1;i<=temp;i++)
    {
        temp3 = a + temp2;
        temp2++;
        a = temp3;
    }
    cout << temp3<<endl;
    

    return 0;
}
