#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll MOD = 1e9 + 7;

ll solve(ll n, vector<ll> &dp){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 6; j++){
            if(i - j >= 0){
                dp[i] = (dp[i] + dp[i - j]) % MOD;
            }
        }
    }
    return dp[n];
}

int main(){
    ll n;
    cin >> n;
    vector<ll> dp(10e6 + 10, 0);
    dp[0] = 1;  
    cout << solve(n, dp) << endl;
    
}