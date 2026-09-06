#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve(){
    ll quantidade;
    cin >> quantidade;
    vector<pair<ll,ll>> posicaotempo(quantidade);

    for(int i = 0; i < quantidade; i++){
        cin >> posicaotempo[i].first;
        posicaotempo[i].first *= 2;
    }
    
    for(int i = 0; i < quantidade; i++){
        cin >> posicaotempo[i].second;
        posicaotempo[i].second *= 2;
    }

    ll ini = 0;
    ll fim = 1e18;
    
    while(ini <= fim){
        ll mid = ini + (fim - ini) / 2;
        ll maxesquerda = 0;
        ll mindireita = 1e18;

        for(int i = 0; i < quantidade; ++i){
            if(posicaotempo[i].second > mid){
                maxesquerda = 1e18;
                mindireita = 0;
                break;
            }
            maxesquerda = max(maxesquerda, posicaotempo[i].first - (mid - posicaotempo[i].second));
            mindireita = min(mindireita, posicaotempo[i].first + (mid - posicaotempo[i].second));
        }
        
        if(maxesquerda <= mindireita){
            fim = mid - 1;
        }
        else{
            ini = mid + 1;
        }
    }
    
    ll maxesquerda = 0;
    for(int i = 0; i < quantidade; ++i){
        maxesquerda = max(maxesquerda, posicaotempo[i].first - (fim + 1 - posicaotempo[i].second));
    }

    cout << maxesquerda / 2;
    if(maxesquerda % 2 != 0){
        cout << ".5";
    }
    cout << endl;
}

int main(){
    int testes;
    cin >> testes;
    while(testes--){
        solve();
    }
    
    return 0;
}