#include <bits/stdc++.h>

using namespace std;

int main(){
    //CSES - Number Spiral
    
    int t;
    cin >> t;
    long long y,x;
    while(t--){
        cin >> y >> x;
        
        if (y < x){
            if (x % 2 == 1){
                cout << x*x - (y-1) << endl;
            }else{
                cout << (x-1)*(x-1) + y << endl;
            }
        }else{
            if (y % 2 == 0){
                cout << y*y - (x-1) << endl;
            }else{
                cout << (y-1)*(y-1) + x << endl;
            }
        }
    }
    
    return 0;
}