#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve(){
    ll k;
    ll resposta = 1;
    ll base = 2;
    cin >> k;
    k --;
    
    while(k >= 1){
        if(k % 2 == 1){
            resposta = (resposta * base) % 1000000007;
            k --;
        }
        base = (base * base) % 1000000007;
        k >>= 1;   
    }

    cout << (resposta * 10) % 1000000007 << endl;

}



int main(){
    int testes;
    cin >> testes;
    while(testes--){
        solve();
    }
    
    return 0;
}