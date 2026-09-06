#include <bits/stdc++.h>

#define ll long long

using namespace std;


void solve(){
    int requirements; int minutos;
    cin >> requirements >> minutos;
    int resposta = minutos;

    int minuto; int lado;
    for(int i = 0; i < requirements; ++i){
        cin >> minuto >> lado;
    }

    

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

