#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
ll MOD = 998244353;
 
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    ll x = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        x ^= a[i];
    }
    // 1 4 5 2 6
    // 0 4 0 0 0 -> 4 ^ 4 = 0
    // 0 0 1 0 0 -> 5 ^ 4 = 1
    // 0 0 0 0 2 -> 6 ^ 4 = 2
    // como é menor que o valor, eu consigo tirar

    if(n == 1){
        cout << 0 << endl;
        return;
    }
    if(!x){
        cout << 1 << endl;
        return;
    }
    ll ans = 0;
    for(int i = 0; i < n; i++){
        if((a[i] ^ x) <= a[i]) ans = (ans + 1) % MOD;
    }
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

