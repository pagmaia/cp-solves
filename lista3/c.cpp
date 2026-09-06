#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve(){
    int poptotal;
    cin >> poptotal;
    ll soma = 0;
    vector<int> cidade(poptotal);

    for(int i = 0; i < poptotal; ++i){
        cin >> cidade[i];
        soma += cidade[i];
    }
    
    if(poptotal < 3){
        cout << -1 << endl;;
        return;
    }

    ll ini = 0; ll fim = soma * 10; ll resposta = 0;
    while(ini <= fim){
        double mid = ini + (fim - ini) / 2;
        int tristes = 0;
        double media = (soma + mid) / poptotal;

        for(int i = 0; i < poptotal; ++i){
            if(cidade[i] < media / 2){
                tristes ++;
            }
        }
        if(tristes * 2 > poptotal){
            resposta = mid;
            fim = mid - 1;

        }
        else{
            ini = mid + 1;
        }

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

