#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
 
void solve(){
    ll m; ll n;
    cin >> m >> n;
    vector<ll> a(m + 1);
    vector<ll> prefix(m + 1);
    vector<ll> b(n + 1);
    prefix[0] = 0LL;
    for(int i = 1; i <= m; i++){
        cin >> a[i];
        prefix[i] = prefix[i - 1] + a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    b[n] = 0LL;
    sort(b.begin(), b.end());
    ll ans = prefix[m] - prefix[b[n]];
    ll block = 0;
    for(int i = n; i > 0; i--){
        block = prefix[b[i]] - prefix[b[i - 1]];
        ans += abs(block);
    }
    cout << ans << endl;
    
}	

 
int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);
 
    ll t;
    cin >> t;
    while(t--){
	solve();
    }
 
 
    return 0;
}

