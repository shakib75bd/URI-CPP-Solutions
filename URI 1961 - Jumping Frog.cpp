//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: URI Online Judge | 1961 - Jumping Frog
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll max_jump,jump_nmbr,fjump,count = 0;
    cin >> max_jump >> jump_nmbr >> fjump ;
    ll q = jump_nmbr - 1;
    
    while(q--)
        {
            ll jump;
            cin >> jump;

            if(abs(fjump - jump) > max_jump) count++;  //find the difference

            fjump= jump;
        }

        if(count == 0) cout << "YOU WIN\n";
        else if(count > 0) cout<< "GAME OVER\n";

    return 0;
}

//Here:
//max_jump =  maximum height the frog can jump
//jump_nmbr = number of jump
//fjump = first jump of the frog
