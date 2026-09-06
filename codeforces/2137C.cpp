#include <bits/stdc++.h>

typedef long long ll;

using namespace std;


void solve(){
    ll a, b;
    cin >> a >> b;
    ll resposta = -1;

    if((a % 2 == 0 and b % 2 == 0) or (a % 2 == 1 and b % 2 == 0 and b % 4 == 0)){
        resposta = max(resposta, (a * b / 2) + 2);
    }
    else if(a % 2 == 1 and b % 2 == 1){
        resposta = max(resposta, a * b + 1);
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