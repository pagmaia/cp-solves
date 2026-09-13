#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
	int n; int k;
	cin >> n >> k;
	vector<ll>	a(n); vector<ll> b(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++){
		cin >> b[i];
	}
	ll ans = 0;
	ll maxb = 0;
	ll soma = 0;
	for(int i = 0; i < n; i++){
		int idx = i + 1;
		maxb = max(maxb, b[i]);
		soma += a[i];
		ll atual = soma + (k - idx) * maxb;
		ans = max(ans, atual);
		if(!(k - idx)) break;
		
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



