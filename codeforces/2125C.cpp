#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;

vector<int> primes = {2, 3, 5, 7};
ll n = 4;

ll calc(ll mx){
    ll ans = 0;
    for(int i = 1; i < (1 << n); i++){
        ll p = 1;
        for(int j = 0; j < n; j++){
            if((i >> j) & 1){
                p *= primes[j];
            }
        }
        ll ct = __builtin_popcount(i);
        if(ct % 2) ans += mx / p;
        else ans -= mx / p;
    }
    return mx - ans;
    
}

void solve(){
    ll l; ll r;
    cin >> l >> r;
    cout << calc(r) - calc(l - 1) << endl;
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



