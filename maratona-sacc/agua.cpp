#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;

ll achaMaior(vector<ll> &c, ll ini, ll fim){
    ll maior = ini;
    for(int i = ini + 1; i <= fim; i++){
        if(c[i] > c[maior]){
            maior = i;
        }
    }
    return maior;
}

ll recBomba(vector<ll> &c, ll ini, ll fim){
    if(ini < 0 or fim > c.size() - 1){
        return 0;
    }

    ll m = achaMaior(c, ini, fim);
    if(ini == fim or m == ini or m == fim){
        return 1;
    }

    ll l = recBomba(c, ini, m - 1);
    ll r = recBomba(c, m + 1, fim);
    return 1 + min(l, r);

}

void solve(){
    ll n;
    cin >> n;
    vector<ll> c(n);
    for(int i = 0; i < n; i++){
        cin >> c[i];
    }

    ll ans = recBomba(c, 0, n - 1);
    cout << ans << endl;
}	
 
int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--){
	solve();
    }
 
 
    return 0;
}

