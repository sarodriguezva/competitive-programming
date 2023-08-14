#include <bits/stdc++.h>

using namespace std;

int main(){
    //CSES - Two Knights
    
    int n;
    cin >> n;
    
    for (long long k = 1; k <= n; k++){
        if (k == 1) cout << 0 << endl;
        else if (k == 2) cout << 6 << endl;
        else if (k == 3) cout << 28 << endl;
        else{
            cout << (4*(k*k-3)+8*(k*k-4)+4*(k-3)*(k*k-5)+4*(k-4)*(k*k-7)+(k-4)*(k-4)*(k*k-9))/2 << endl;
        }
    }
    
    return 0;
}