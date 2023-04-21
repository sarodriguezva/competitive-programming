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
    //Shell Game - USACO
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    setIO("shell");

    int n;
    cin >> n;
    int a,b,g;
    int pebble[3] = {0,1,2};
    int cnt[3] = {0,0,0};
    for (int i = 0; i < n; i++){
        cin >> a >> b >> g;
        swap(pebble[a-1], pebble[b-1]);
        cnt[pebble[g-1]]++;
    }
    cout << max(cnt[0], max(cnt[1], cnt[2])) << endl;
    return 0;
}