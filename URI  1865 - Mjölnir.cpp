#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        string S;
        int a,b,c;
        cin >> S >> a;
        for(int i=0;i<S.size();i++)
        {
            if(S[0] == 'T' && S[1]=='h' && S[2]=='o' && S[3]=='r') b=1;
            else b=2;
        }
        
        if (b==1) cout << "Y\n";
        else cout << "N\n";

    }

    return 0;
}
