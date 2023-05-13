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

void solve(int *a, int *b, int *y){
    if (*a >= *y-*b){
        *a -= *y-*b;
        *b = *y;
    }else{
        *b += *a;
        *a = 0;
    }
}

int main(){
    //Mixing Milk - USACO
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    setIO("mixmilk");

    int a,b,c;
    int x,y,z;
    cin >> x >> a;
    cin >> y >> b;
    cin >> z >> c;

    for (int i = 0; i < 100; i++){
        int m = i%3;
        if (m == 0){
            solve(&a, &b, &y);
        }else if (m == 1){
            solve(&b, &c, &z);
        }else if (m == 2){
            solve(&c, &a, &x);
        }
    }
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}