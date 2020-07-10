#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    long long n,a = 1,b = 1,c;
    cin >> T;
    while(T--)
    {
        a = 1;
        b = 1;
        cin >> n;
        if(n==0)  cout << "Fib(" << n << ") = 0"<<endl;
        else if(n>0)
        {
            for (int i=1;i<n;i++)
             {
                c = a;
		        a = b;
		        b = b+c;
            
             }
            cout << "Fib(" << n << ") = ";
            cout << a <<endl;
        }
    }
    return 0;
}
