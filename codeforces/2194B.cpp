#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    ll n, y, x;
    cin >> n >> x >> y;
    vector<int> a(n);
    ll s = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        s += a[i] / x;
    }
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ll m = ((s - a[i] / x) * y) + a[i];
        ans = max(m, ans);
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



