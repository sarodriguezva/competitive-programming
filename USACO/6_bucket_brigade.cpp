/*AUTHOR: @cooldkind/@sarodriguezva*/
//g++ -std=c++17 -O2 -Wconversion -Wshadow -Wall -Wextra -fsanitize=undefined main.cpp -o main && ./main < input.txt > output.txt
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
const long long MOD = 1e9 + 7;
const long long INF = 1e9;
const long double EPS = 1e-9;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

void solve(){
    
}

int main(){
    //Bucket Brigade - USACO
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    setIO("buckets");

    char c;
    int b_i = -1, b_j = -1;
    int l_i = -1, l_j = -1;
    int r_i = -1, r_j = -1;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            cin >> c;
            if (c == 'B'){
                b_i = i;
                b_j = j;
            }
            if (c == 'L'){
                l_i = i;
                l_j = j;
            }
            if (c == 'R'){
                r_i = i;
                r_j = j;
            }
        }
    }
    int cnt = abs(b_i - l_i) + abs(b_j - l_j) - 1;
    if ((b_i == l_i && l_i == r_i && abs(r_j - b_j) < abs(l_j - b_j)) 
        || (b_j == l_j && l_j == r_j && abs(r_i - b_i) < abs(l_i - b_i))){
        cnt += 2;
    }
    cout << cnt << endl;

    return 0;
}