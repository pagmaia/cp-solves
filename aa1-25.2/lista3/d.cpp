#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve(){
    ll lampadasacesas;
    cin >> lampadasacesas;

    ll ini = 2;
    ll fim = 2e18;
    ll resposta = 0;
    while(ini <= fim){
        ll mid = ini + (fim - ini) / 2;
        ll contagem = 0;

        contagem = mid - int(sqrtl(mid));

        if(contagem < lampadasacesas){
            ini = mid + 1;
        }
        else{
            fim = mid - 1;
        }
    }
    
    cout << ini << endl;

}

int main(){
    int testes;
    cin >> testes;
    while(testes--){
        solve();
    }
    return 0;
}

// 0 0
// 0 1

// 0 0 0
// 0 1 0
// 0 1 1

// 0 0 0 0
// 0 1 0 1
// 0 1 1 1
// 0 1 1 0

// 0 0 0 0 0
// 0 1 0 1 0
// 0 1 1 1 0
// 0 1 1 0 0 
// 0 1 1 0 1

// 0 0 0 0 0 0
// 0 1 0 1 0 1 
// 0 1 1 1 0 0 
// 0 1 1 0 0 0 
// 0 1 1 0 1 0 
// 0 1 1 0 1 1 

// 0 1 1 0 1 1 1 0 1