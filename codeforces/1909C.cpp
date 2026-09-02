#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
 
void solve(){
    int n; cin >> n;
    multiset<ll> l; vector<ll> r(n); vector<ll> c(n);
    for(int i = 0; i < n; i++){
        ll a; cin >> a;
        l.insert(a);
    }
    for(int i = 0; i < n; i++) cin >> r[i];
    for(int i = 0; i < n; i++) cin >> c[i];
    ll ans = 0;
    sort(r.begin(), r.end());
    sort(c.begin(), c.end(), greater<int>());
    vector<int> intv(n);
    for(int i = 0; i < n; i++){
        auto best = prev(l.lower_bound(r[i]));
        ll esq = *best;
        l.erase(best);
        intv[i] = r[i] - esq;
    }
    sort(intv.begin(), intv.end());
    for(int i = 0; i < n; i++){
        ans += intv[i] * c[i];
    }
 
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
 
 