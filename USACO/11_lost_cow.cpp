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
    //The Lost Cow - USACO
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    setIO("lostcow");

    int x, y;
    cin >> x >> y;

    int sum = 0;
    int k = x, prev = k;
    int i = 0;
    while (true){
        if (x == y) break;
        prev = k;
        k = x + pow(-1,i)*pow(2,i);
        sum += abs(k - prev);
        i++;
        if (k >= y && x <= y) break;
        else if (k <= y && x > y) break;
    }
    if (x <= y) sum -= (k-y);
    else sum -= (y-k);
    cout << sum << endl;

    return 0;
}