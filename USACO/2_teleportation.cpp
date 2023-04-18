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
    //Fence Painting - USACO
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    setIO("teleport");

    int a,b,x,y;
    cin >> a >> b >> x >> y;

    if (a > b) swap(a,b);
    if (x > y) swap(x,y);

    cout << min(abs(b-a), abs(b-y) + abs(x-a)) << endl;
    
    return 0;
}