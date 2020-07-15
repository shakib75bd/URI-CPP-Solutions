#include<iostream>
using namespace std;

int main()
{
				double a=0.2, b=1.2, c=2.2, d=3.2;
				
 
				cout << "I=0 J=1\n";
				cout << "I=0 J=2\n";
        cout << "I=0 J=3\n";
				
				while(1)
				{
								if(a>2) break;
                
								cout << "I=" << a <<" J=" << b <<endl;
								cout << "I=" << a <<" J=" << c <<endl;
								cout << "I=" << a <<" J=" << d <<endl;

								a = a + 0.2;
								b = b + 0.2;
								c = c + 0.2;
								d = d + 0.2;
				}
				
return 0;
}
