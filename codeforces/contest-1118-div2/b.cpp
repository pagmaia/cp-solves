#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    int n; int m; cin >> n >> m;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    priority_queue<ll> pq;
    ll sum = 0; ll ans = LLONG_MIN;
    for(int i = 0; i < n; i++){
        if(pq.size() == m - 1) ans = max(ans, a[i] * m - sum);
        pq.push(a[i]);
        sum += a[i];
        if(pq.size() == m){
            int tp = pq.top();
            pq.pop();
            sum -= tp;
        }
    }
    cout << ans << endl;
    
}
// 1 2 2 2 3 4 4
// 7 6 3



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



