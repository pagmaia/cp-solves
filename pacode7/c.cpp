//https://codeforces.com/group/JY6ka5uI3P/contest/714668/problem/C

#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<pair<pair<ll, ll>, pair<ll, ll>>> div(n);
    ll mnl = LLONG_MAX; ll mxl = 0;
    ll mnr = LLONG_MAX; ll mxr = 0;
    for(int i = 0; i < n; i++){
        mnl = min(mnl, a[i]);
        mxl = max(mxl, a[i]);
        div[i].first = {mnl, mxl};
    }
    for(int i = n - 1; i >= 0; i--){
        mnr = min(mnr, a[i]);
        mxr = max(mxr, a[i]);
        div[i].second = {mnr, mxr};
    }
    ll ans = 0;
    for(int i = 0; i < n - 1; i++){
        auto d = div[i]; auto d1 = div[i + 1];
        ans = max(ans, max(d.first.first * d1.second.second, d.first.second * d1.second.first));
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

