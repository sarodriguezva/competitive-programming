#include <bits/stdc++.h>

using namespace std;

int main(){
    //CSES - Bit Strings
    
    int n;
    cin >> n;
    
    long long m = 1e9 + 7;
    int res = 1;
    for (int i = 0; i < n; i++){
        res *= 2;
        res %= m;
    }
    
    cout << res << endl;
    
    return 0;
}