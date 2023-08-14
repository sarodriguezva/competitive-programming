#include <bits/stdc++.h>

using namespace std;

int main(){
    //CSES - Two Sets
    
    int n;
    cin >> n;
    
    if ((n*(n+1))/2 % 2 != 0){
        cout << "NO" << endl;
        return 0;
    }
    
    cout << "YES" << endl;
    
    vector<int> a;
    vector<int> b;
    
    int k = 0;
    for (int i = 1; i <= n; i++){
        if (i == (4*k) && n % 2 == 0) a.push_back(i);
        else if (i == (4*k) && n % 2 != 0){
            a.push_back(i);
            k++;
        }
        else if (i == (4*k + 1) && n % 2 == 0){
            a.push_back(i);
            k++;
        }else if (i == (4*k - 1) && n % 2 != 0) a.push_back(i);
        else{
            b.push_back(i);
            if (i == (4*k+1)) k++;
        }
    }
    
    cout << a.size() << endl;
    for (auto x : a){
        cout << x << " ";
    }
    cout << endl;
    cout << b.size() << endl;
    for (auto x : b){
        cout << x << " ";
    }
    
    return 0;
}