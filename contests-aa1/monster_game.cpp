#include "bits/stdc++.h"

#define ll long long

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<ll> esp(n);
    vector<ll> level(n);
    for(int i = 0; i < n; i++){
        cin >> esp[i];
    }
    vector<ll> prefixsum(n + 1);
    prefixsum[0] = 0;
    for(int i = 0; i < n; i++){
        cin >> level[i];
        prefixsum[i + 1] = level[i] + prefixsum[i];
    }
    sort(esp.begin(), esp.end());

    ll ans = 0;
    for(int i = 0; i < n; i++){
        ll d = esp[i];
        ll espadas = n - i;

        ll ini = 1;
        ll fim = n;
        ll resposta = 0;

        while(ini <= fim){
            ll mid = ini + (fim - ini) / 2;
            if(prefixsum[mid] <= espadas){
                resposta = mid * d;
                ini = mid + 1;
            }
            else{
                fim = mid - 1;
            }
        }
        
        ans = max(resposta, ans);
    }
        
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }


    return 0;
}
