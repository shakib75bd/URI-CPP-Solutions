#include <iostream>
using namespace std;

int main(){
    int n, ans, pos;
    cin >> n;
    int N[n];

    ans = 1000;
    pos = 0;
    
    for(int i = 0; i < n; i++){
            cin >> N[i];
            if(N[i] < ans)
            {
                ans = N[i];
                pos = i;
            }
    }
    
    cout << "Menor valor: " << ans << endl;
    cout << "Posicao: " << pos << endl;   
    
    return 0;
}
