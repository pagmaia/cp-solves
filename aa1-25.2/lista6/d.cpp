#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll potencia(ll expoente, ll base, ll mod){
    ll resposta = 1;
    while(expoente >= 1){
        if(expoente % 2 == 1){
            resposta = (resposta * base) % mod;
            expoente --;
        }
        base = (base * base) % mod;
        expoente >>= 1;   
    }

    return resposta;
}

void solve(){
    int n; int x;
    cin >> n >> x;
    ll resposta = x * (potencia(n - 1, 2, 1000000007)) % 1000000007;
    cout << resposta << endl;

}

int main(){
    int testes;
    cin >> testes;
    while(testes--){
        solve();
    }
    
    return 0;
}