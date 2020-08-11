//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name:  uri 2057
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include<bits/stdc++.h>
using namespace std;

#define uns unsigned
#define ll long long
#define dl double
#define st string
#define ch char

int main()
{
      int a,b,c;
      cin >> a >> b >> c;
      if(a==0) a=24;
      int sum = a+b+c;
      if(sum==24) cout<<"0\n";
      else if(sum>0 && sum <24) cout<<sum<<endl;
      else if(sum>24) cout<<sum - 24<<endl;
return 0; 
}
