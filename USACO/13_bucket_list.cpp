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
    //The Bucket List - USACO
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    setIO("blist");

    int n;
    cin >> n;

    vector<int> v(1000+1);
    int s,t,b;
    for (int i = 0; i < n; i++){
        cin >> s >> t >> b;
        v[s] += b;
        v[t] -= b;
    }

    int maximum = 0;
    int current = 0;
    for (int i = 0; i < 1000; i++){
        current += v[i];
        maximum = max(maximum, current);
    }

    cout << maximum << endl;

    return 0;
}