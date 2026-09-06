#include <bits/stdc++.h>

#define ll long long

using namespace std;

int n;
const int MAX = 2e5 + 10;
vector<ll> a(MAX);
vector<pair<ll, ll>> dp(MAX, {0, LLONG_MIN});

ll solve(){
    dp[0].first = 0;
    dp[0].second = LLONG_MIN;
    
    for(int i = 1; i <= n; i++){
        dp[i].first = max(dp[i - 1].first, dp[i - 1].second + a[i] * 2);
        dp[i].second = max(dp[i - 1].second, dp[i - 1].first + a[i]);
        cout << dp[i].first << " " << dp[i].second << endl;
    }
    return max(dp[n].first, dp[n].second);
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    cout << solve();

    return 0;
}