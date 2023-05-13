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
    //The Bovine Shuffle - USACO
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    setIO("shuffle");

    int n;
    cin >> n;

    int a;
    vector<int> shuffle;
    for (int i = 0; i < n; i++){
        cin >> a;
        shuffle.push_back(--a);
    }

    vector<int> cows;
    for (int i = 0; i < n; i++){
        cin >> a;
        cows.push_back(a);
    }

    int k = 0;
    vector<int> v(n);
    while(k < 3){
        for (int i = 0; i < n; i++){
            v[i] = cows[shuffle[i]];
        }
        cows = v;
        k++;
    }

    for (int i = 0; i < n; i++){
        cout << cows[i] << endl;
    }

    return 0;
}