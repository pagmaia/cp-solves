#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    ll x; cin >> x;
    ll sz = to_string(x).size();
    ll ans = 1;
    while(sz--){
        ans *= 10;
    }
    cout << ans + 1 << endl;
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



