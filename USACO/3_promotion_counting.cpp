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
    //Promotion Counting - USACO
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    setIO("promote");

    int i_b, f_b, i_s, f_s, i_g, f_g, i_p, f_p;
    int p_s = 0, p_g = 0, p_p = 0;

    cin >> i_b >> f_b >> i_s >> f_s >> i_g >> f_g >> i_p >> f_p;

    if (f_p >= i_p){
        p_p = f_p - i_p;
        i_g -= p_p;
    }

    if (f_g >= i_g){
        p_g = f_g - i_g;
        i_s -= p_g;
    }

    if (f_s >= i_s){
        p_s = f_s - i_s;
        i_b -= p_s;
    }

    cout << p_s << endl;
    cout << p_g << endl;
    cout << p_p << endl;

    return 0;
}