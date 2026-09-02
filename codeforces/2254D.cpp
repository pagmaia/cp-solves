#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    map<ll, ll> freq;
    map<ll, ll> ans;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        freq[a[i]] ++;
    }

    if(!freq.count(0)){
        cout << -1 << endl;
        return;
    }

    ll lastu = 0;
    ll antes = 0;
    ll antesf = 0;
    for(auto it = freq.begin(); it != freq.end(); it++){
        ll num = it->first;
        ll f = it->second;
        if(num > 0){
            ll dif = num - antes;
            ll u = dif / antesf;
            if(dif % antesf or u <= lastu){
                cout << -1 << endl;
                return;
            }
            ans[antes] = u;
            lastu = u;
        }
        antes = num;
        antesf = f;
    }
    ans[antes] = lastu + 1;

    for(int i = 0; i < n; i++){
        cout << ans[a[i]] << " ";       
    }
    cout << endl;
}
// 3 3 3

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



