#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;

ll dist(pair<ll, ll> s, pair<ll, ll> f){
    return abs(s.first - f.first) + abs(s.second - f.second);
}

void solve(){
    ll n, ax, ay, bx, by;
    cin >> n >> ax >> ay >> bx >> by;
    vector<ll> x(n);
    map<ll, pair<ll, ll>> mapa;
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    for(int i = 0; i < n; i++){
        ll y;
        cin >> y;
        if(!mapa.count(x[i])){
            mapa[x[i]] = {y, y};
        }
        else{
            mapa[x[i]].first = min(mapa[x[i]].first, y);
            mapa[x[i]].second = max(mapa[x[i]].second, y);
        }
    }
    mapa[bx] = {by, by};
    
    vector<vector<ll>> dp(mapa.size() + 1, vector<ll>(2));
    dp[0][0] = 0;
    dp[0][1] = 0;
    int i = 1;
    pair<ll, pair<ll, ll>> last = {ax, {ay, ay}};
    
    for(auto p : mapa){
        pair<ll, ll> la = {p.first, p.second.first};
        pair<ll, ll> ha = {p.first, p.second.second};
        pair<ll, ll> lu = {last.first, last.second.first};
        pair<ll, ll> hu = {last.first, last.second.second};
        dp[i][0] = min(dp[i - 1][0] + dist(hu, la), dp[i - 1][1] + dist(lu, la)) + dist(la, ha);
        dp[i][1] = min(dp[i - 1][0] + dist(hu, ha), dp[i - 1][1] + dist(lu, ha)) + dist(ha, la);
        i++;
        last = {p.first, p.second};
    }
    
    cout << min(dp[mapa.size()][0], dp[mapa.size()][1]) << endl;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
	    solve();
    }


    return 0;
}



