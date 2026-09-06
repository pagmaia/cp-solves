#include "bits/stdc++.h"

#define ll long long

using namespace std;

bool check(vector<ll> balas, ll h, ll x){
    auto minimo = min_element(balas.begin(), balas.begin() + x);
    auto maximo = max_element(balas.begin() + x, balas.end());
    if(*maximo > *minimo){
        int idx1 = minimo - balas.begin();
        int idx2 = maximo - balas.begin();
        balas[idx1] = *maximo;
        balas[idx2] = *minimo;
    }
    ll soma = 0;
    for(int i = 0; i < x; i++){
        soma += balas[i];
    }
    if(soma >= h){
        return true;
    }
    return false;

}

void solve(){
    ll n, h, r;
    cin >> n >> h >> r;
    vector<ll> balas(n);
    ll total = 0;
    for(int i = 0; i < n; i++){
        ll b;
        cin >> b;
        balas[i] = b;
        total += b;
    }
    

    ll ans = 0;
    if(h > total){
        if(!(h % total)){
            ans = (h / total) * n + ((h / total) - 1) * r;
        }
        else{
            ans = (h / total) * (r + n);
        }
        
        h = h % total;
    }

    ll ini = 1;
    ll fim = n;
    ll resposta = 0;

    if(h > 0){
        while(ini <= fim){
        ll mid = ini + (fim - ini) / 2;
        if(check(balas, h, mid)){
            resposta = mid;
            fim = mid - 1;
        }
        else{
            ini = mid + 1;
        }
    }
}

    cout << ans + resposta << endl;

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}