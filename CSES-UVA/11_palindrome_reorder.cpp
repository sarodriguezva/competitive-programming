#include <bits/stdc++.h>

using namespace std;

int main() {
    //CSES - Palindrome Reorder
    
    string s;
    cin >> s;
    
    vector<int> letters(26, 0);
    
    for (auto x : s){
        letters[x - 'A']++;
    }
    
    string t;
    int odd = -1;
    for (int i = 0; i < 26; i++){
        if (letters[i] % 2 != 0 && odd >= 0){
            cout << "NO SOLUTION" << endl;
            return 0;
        }else if (letters[i] % 2 != 0 && odd < 0){
            odd = i;
        }
        
        char c = i + 'A';
        
        for (int j = 0; j < letters[i]/2; j++){
            t.push_back(c);
        }
    }
    
    string v = t;
    if (odd >= 0) v.push_back(odd + 'A');
    reverse(t.begin(), t.end());
    v.append(t);
    
    cout << v << endl;

    return 0;
}