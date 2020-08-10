//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name:  uri 1985
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
      int t;
      cin >>t;
      dl sum = 0;
      while(t--)
      {
          dl a,b;
          cin>>a>>b;
          if(a==1001) sum = sum + (b*1.50);
          else if(a==1002) sum = sum + (b*2.50);
          else if(a==1003) sum = sum + (b*3.50);
          else if(a==1004) sum = sum + (b*4.50);
          else if(a==1005) sum = sum + (b*5.50);
      }
      cout<<fixed<<setprecision(2)<<sum<<endl;

return 0; 
}
