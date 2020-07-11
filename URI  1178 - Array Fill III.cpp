#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int  n = 0;
    double T;
    cin >> T;
    for(int i=0; i<100; i++ )
    {
        cout << "N[" << i << "] = ";
        cout << fixed << setprecision(4) << T << endl;
        T = T/2;
    }

    return 0;
    
}
