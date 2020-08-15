//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: URI 2161
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include<bits/stdc++.h>
using namespace std;    

#define uns unsigned
#define ll long long
#define dl double
#define st string
#define ch char
#define fxsp fixed<<setprecision    

int main()          
{
    int n;
    dl sum = 0;
    cin >> n;
    if(n==0) cout<<"3.0000000000\n";
    else if(n==1) cout<<"3.1666666667\n";
    else
    {
        for(int i=2;i<=n;i++)
        {
            if(i==2) sum = (6.0/37.0);
            else  sum = 1/(6.00+sum);
        }
        cout<<fxsp(10)<<(sum+3.00)<<endl;   
    }

return 0;
}
