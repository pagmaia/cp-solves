#include "bits/stdc++.h"

using namespace std;

#define ll long long

void solve(){
    int n, m;
    cin >> n >> m;
    vector<ll> linhas(n);
    vector<vector<ll>> parabolas(m, vector<ll>(3, 0));
    for(int i = 0; i < n; i++){
        cin >> linhas[i];
    }
    sort(linhas.begin(), linhas.end());
    for(int i = 0; i < m; i++){
        ll a, b, c;
        cin >> a >> b >> c;
        parabolas[i][0] = a;
        parabolas[i][1] = b;
        parabolas[i][2] = c;
    }

    for(vector<ll> p : parabolas){
        ll a = p[0];
        ll b = p[1];
        ll c = p[2];

        ll ini = 0;
        ll fim = n - 1;
        ll resposta = 0;

        while(ini <= fim){
            ll mid = ini + (fim - ini) / 2;
            if(linhas[mid] < b){
                resposta = mid;
                ini = mid + 1;
            }
            else{
                fim = mid - 1;  
            }
        }
        ll delta = 4 * a * c;
        if(resposta < n){
            ll coef = b - linhas[resposta];
            if(delta > (coef * coef)){
                cout << "YES" << "\n";
                cout << linhas[resposta] << "\n";
                continue;
            }
        }
        if(resposta < n - 1){
            ll coef = b - linhas[resposta + 1];
            if(delta > (coef * coef)){
                cout << "YES" << "\n";
                cout << linhas[resposta + 1] << "\n";
                continue;
            }
        }
        cout << "NO" << "\n";
        
    }
    cout << "\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }



}