#include<iostream>
using namespace std;
int main()
{
    int T, n = 0;
    cin >> T;
    for(int i=0; i<1000; i++ )
    {
        cout << "N[" << i << "] = " << n << endl;
        n++;
        if(n==T) n = 0;
    }

    return 0;
    
}
