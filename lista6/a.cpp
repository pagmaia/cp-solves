#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve(){
    int expoente;
    cin >> expoente;
    expoente --;
    ll resultado = 1;
    ll base = 2;
    while(expoente >= 1){
        if(expoente % 2 == 1){
            resultado = (resultado * base) % 1000000007;
            expoente --;
        }
        base = (base * base) % 1000000007;
        expoente >>= 1;
        
    }
    
    cout << resultado << endl;
    return;
}


int main(){
    int testes;
    cin >> testes;
    while(testes--){
        solve();
    }
    
    return 0;
}