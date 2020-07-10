#include<iostream>
using namespace std;
int main()
{
    int x,z,count = 0,sum = 0;
    cin >> x;

    while(1)
    {
        cin >> z;
        if(z > x)
        {


            while(z>sum)       
            {
                sum = sum + x;
                x++;
                count++;            
            }
            cout << count <<endl;
            break;
        }
        else continue;
       
    }
    return 0;
}
