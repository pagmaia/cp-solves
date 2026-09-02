#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    int n; cin >> n;
    ll soma = 0;
    vector<pair<ll, ll>> st(n);
    for(int i = 0; i < n; i++){
        cin >> st[i].first;
        soma += st[i].first;
    }
    ll ans = 0;
    for(int i = 0; i < n; i++){
        cin >> st[i].second;
        if(st[i].second > st[i].first){
            cout << -1 << endl;
            return;
        }
        ans = max(ans, soma - (st[i].first - st[i].second));
    }
   
    cout << ans << endl;
}



int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);

    int t = 1;
    while(t--){
	solve();
    }


    return 0;
}



