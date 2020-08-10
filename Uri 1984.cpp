//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name:  uri 1984
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
      st s;
      cin >> s;
      ll size = s.size();

      ll ara[size],p=0;

      for(int i=0;i<size;i++)
      {
          int q = s[i]-48;
          ara[p] = q;
          p++;
      }

      reverse(ara,ara+size);

      for(int i=0;i<size;i++)
      {
          cout<< ara[i];
      }

      cout<<endl;

return 0; 
}
