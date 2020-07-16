#include <iostream>
using namespace std;
     
int main(){
    int a, n1, n2, b;
    
    int p[5], im[5];
    
    n1 = 0;
    n2 = 0;
    
    for(int j = 0; j < 15; j++){
            cin >> a;
            if(a%2 == 0){
                    p[n1] = a;
                    n1++;
            }else{
                  im[n2] = a;
                  n2++;
            }
            
            if(n1 == 5){
                 b = 0;
                 while(b != 5)
                 {
                      cout << "par[" << b << "] = " << p[b] << "\n"; 
                      b++;
                }
                 n1 = 0;
            }
            if(n2 == 5){
                 b = 0;
                 while(b != 5)
                 {
                      cout << "impar[" << b << "] = " << im[b] << "\n"; 
                      b++;
                }
                 n2 = 0;
            }
            if(j == 14){
                 b = 0;
                 while(b < n2)
                 { 
                    cout << "impar[" << b << "] = " << im[b] << "\n"; 
                    b++;
                 }
                 b = 0;
                 while(b < n1)
                 {
                      cout << "par[" << b << "] = " << p[b] << "\n"; 
                      b++;
                }
            }
                 
    }
    return 0;
}
