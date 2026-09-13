#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;

void solve(){
    ll x, y, k;
    cin >> x >> y >> k;
    ll ans = 0;
    ll dif = y - x;

    if(!dif){
        cout << 0 << endl;
        return;
    }
    
    for(int i = 0; i < k; i++){
        ll b = y + i;
        ll a = x + i;
        ll mod = b % a;
        ans += mod;
        if(a == dif or a > dif){
            ans += (k - i - 1) * dif;
            break;
        }
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



