#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;

ll MOD = 998244353;

ll pot(ll b, ll e){
    ll ans = 1;
    while(e > 0){
        if(e & 1){
            ans = ans * b % MOD;
        }
        b = b * b % MOD;
        e >>= 1;
    }
    return ans % MOD;
}

void solve(){
    ll n; ll m; ll r; ll c;
    cin >> n >> m >> r >> c;
    ll t = n * m;
    ll ct = (n - r + 1) * (m - c + 1);
    cout << pot(2, t - ct) << endl;
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



