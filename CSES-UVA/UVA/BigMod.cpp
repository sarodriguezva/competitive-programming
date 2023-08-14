#include <bits/stdc++.h>

using namespace std;

int main(){
    //Big Mod
    
    int b,p,m;
    while(cin >> b >> p >> m){
        int ans = 1;
        b = b%m;
        
        if (b == 0){
            cout << 0 << endl;
            continue;
        }
        
        while(p > 0){
            if (p & 1) ans = (ans*b)%m;
            p = p >> 1;
            b = (b*b)%m;
        }
        
        cout << ans << endl;
    }
    
    return 0;
}