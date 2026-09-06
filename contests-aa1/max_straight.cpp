#include <bits/stdc++.h>

#define ll long long

using namespace std;
int n;
const int MAX = 2e5 + 10;
vector<ll> a(MAX);
map<ll, ll> dp;

ll solve(){
    ll resposta = 0;
    for(int i = 0; i < n; i++){
        dp[a[i]] = max(dp[a[i]], dp[a[i] - 1] + 1);
        resposta = max(resposta, dp[a[i]]);
    }
    return resposta;
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << solve();
    
    return 0;
}