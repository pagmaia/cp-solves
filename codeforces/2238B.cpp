#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
 
void solve(){
    ll n; cin >> n;
    ll ans = 0;
    for(ll i = 1; i <= n; i++) ans += (n / i) * (n / i);
    cout << ans << endl;

}	
 
int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);
 
    int t = 1;
    cin >> t;
    while(t--){
		solve();
    }
 
 
    return 0;
}

