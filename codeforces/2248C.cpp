#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
ll points(ll r, ll l){
    return (r - l + 1) * (r - l + 1);
}

void solve(){
    ll n;
    cin >> n;

    vector<ll> a(2 * n + 1);
    for(ll i = 1; i <= 2 * n; i++){
        cin >> a[i];
    }
    
    vector<ll> dp(2 * n + 1);
    unordered_map<ll, ll> map;
    dp[0] = 0;
    for(ll i = 1; i <= 2 * n; i++){
        if(!map.count(a[i])){
            dp[i] = dp[i - 1] + 1;
            map[a[i]] = i;
        }
        else{
            dp[i] = max(dp[i - 1] + 1, dp[map[a[i]] - 1] + points(i, map[a[i]]));
        }
       
    }
    
    cout << dp[2 * n] << endl;
    
    
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

