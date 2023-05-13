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
    //Speeding Ticket - USACO
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    setIO("speeding");

    int n,m;
    cin >> n >> m;

    vector<pair<int,int>> road;
    vector<pair<int,int>> bessie;

    int x, s, sum = 0;
    for (int i = 0; i < n; i++){
        cin >> x >> s;
        sum += x;
        road.push_back({sum,s});
    }
    sum = 0;
    for (int i = 0; i < m; i++){
        cin >> x >> s;
        sum += x;
        bessie.push_back({sum,s});
    }

    int k = 0;
    int next_b = bessie[0].first, next_r = road[0].first, b_i = 0, r_i = 0;
    int maximum = 0;
    while(k <= 100){
        maximum = max(maximum, bessie[b_i].second - road[r_i].second);

        if (k == next_b) next_b = bessie[++b_i].first;
        if (k == next_r) next_r = road[++r_i].first;
        k++;
    }

    cout << maximum << endl;

    return 0;
}