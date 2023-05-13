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
    //The Cow-Signal - USACO
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    setIO("cowsignal");

    int m, n, k;
    cin >> m >> n >> k;

    string s;
    vector<string> v;
    for (int i = 0; i < m; i++){
        cin >> s;
        v.push_back(s);
    }

    s = "";
    vector<string> w;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            char c = v[i][j];
            for (int u = 0; u < k; u++){
                s.push_back(c);
            }
        }
        for (int u = 0; u < k; u++){
            w.push_back(s);
        }
        s = "";
    }

    for (auto x : w){
        cout << x << endl;
    }

    return 0;
}