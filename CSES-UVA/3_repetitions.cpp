#include <bits/stdc++.h>

using namespace std;

int main(){
    //CSES - Repetitions
    string s;
    cin >> s;
    
    int max = 0;
    int cnt = 1;
    for (int i = 0; i < s.size()-1; i++){
        if (s[i] == s[i+1]){
            cnt++;
        }else {
            if (cnt > max){
                max = cnt;
            }
            cnt = 1;
        }
    }
    
    if (cnt > max){
        max = cnt;
    }
    
    cout << max << endl;
    
    return 0;
}