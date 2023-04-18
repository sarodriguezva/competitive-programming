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
    //Do you know your ABC's? - USACO
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    //setIO("problem");

    int a1, a2, a3, a4, a5, a6, a7;
    cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7;
    vector<int> v = {a1, a2, a3, a4, a5, a6, a7};

    sort(v.begin(), v.end());

    int A, B, C;
    A = v[0];
    B = v[1];
    C = v[6] - A - B;

    cout << A << " " << B << " " << C << endl;
    
    return 0;
}