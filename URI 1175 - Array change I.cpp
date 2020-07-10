#include<bits/stdc++.h>

using namespace std;

int main()
{
    int ara[20],i;
    for(i=19;i>=0;i--)
    {
        cin>>ara[i];
    }
    
    for(i=0;i<20;i++)
    {
        cout<<"N["<<i<<"] = ";
        cout<<ara[i]<<endl;
    }

    return 0;
}
