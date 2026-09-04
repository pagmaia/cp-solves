#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    ll n; ll m;
    cin >> n >> m;
    vector<ll> stb(n);
    vector<vector<ll>> tw(n, vector<ll>(m));
    for(int i = 0; i < n; i++){
        cin >> stb[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> tw[i][j];
        }
    }
    ll ans = m;
    vector<ll> tp;
    for(int i = n - 1; i >= 0; i--){
        for(int j = 0; j < m; j++){
            tp.push_back(tw[i][j]);
        }
        sort(tp.begin(), tp.end(), greater<ll>());
        tp.resize(m);

        ll acc = 0;
        for(ll l = 0; l < m; l++){
            acc += tp[l];
            if(acc >= stb[i]){
                ans = min(ans, l + 1);
                break;
            }
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



