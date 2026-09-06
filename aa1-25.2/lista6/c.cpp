#include <bits/stdc++.h>

#define ll long long

using namespace std;


void solve(){
    ll l; ll r;
    cin >> l >> r;
    cout << (r / 3) - ((l - 1) / 3) << endl;
}

int main(){
    int testes;
    cin >> testes;
    while(testes--){
        solve();
    }
    
    return 0;
}