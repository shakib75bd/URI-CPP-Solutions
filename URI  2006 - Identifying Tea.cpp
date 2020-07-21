//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: URI Online Judge | 2006-Identifying Tea
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include <iostream>

using namespace std;

int main()
{
    long long a, b, count = 0;
    cin >> a ;

    for(int i=1;i<=5;i++)
    {
        cin >> b ;
        if(b==a) count ++;
    }
    cout << count <<endl;

return 0;
}
