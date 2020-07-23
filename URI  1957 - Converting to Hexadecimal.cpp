//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: URI Online Judge | 1957- Converting to Hexadecimal
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include <iostream>
using namespace std;

#define ll long long

int main()
{
    ll a,c;
    string s;
    cin >> a;
    while(a>0)
    {
    
            c=a%16;
            a= a/16;
            if(c>=0 && c<=9) 
            {
                char ch=c+'0';
                s=s+ch;
            }
            else if(c==10) s = s + 'A';
            else if(c==11) s = s + 'B';
            else if(c==12) s = s + 'C';
            else if(c==13) s = s + 'D';
            else if(c==14) s = s + 'E';
            else if(c==15) s = s + 'F';
    }
        
    for(int i=s.length()-1;i>=0;i--)  cout<<s[i];
    cout<<endl;

return 0;
}
