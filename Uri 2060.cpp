//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name:  Uri 2060
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
      int n;
      cin >> n;
      int count2=0,count3=0,count4=0,count5=0;
      while(n--)
      {
          int a;
          cin >>a;
          if(a%2==0) count2++;
          if(a%3==0) count3++;
          if(a%4==0) count4++;
          if(a%5==0) count5++;
      }
      cout<< count2 << " Multiplo(s) de 2\n";
      cout<< count3 << " Multiplo(s) de 3\n";
      cout<< count4 << " Multiplo(s) de 4\n";
      cout<< count5 << " Multiplo(s) de 5\n";

return 0; 
}
