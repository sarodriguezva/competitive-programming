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
    //Word Processor - USACO
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    setIO("word");

    int n, k;
    string s;
    cin >> n >> k;

    vector<string> v;
    for (int i = 0; i < n; i++){
        cin >> s;
        v.push_back(s);
    }

    for (int i = 0; i < n; ){
        int cnt = 0;
        string line = "";
        while (cnt + v[i].size() <= k){
            line.append(v[i]);
            line.append(" ");
            cnt += v[i].size();
            i++;
            if (i >= n) break;
        }
        cout << line.substr(0, line.size()-1) << endl;
    }

    return 0;
}