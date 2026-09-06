#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll solve(vector<int> &c, vector<ll> &dp, int m){
    for(int i = 1; i <= c.size(); i++){
        for(int p = c[i - 1]; p <= m; p++){
            dp[p] = min(dp[p], dp[p - c[i - 1]] + 1);
        }
    }
    return dp[m];
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> coins(n);
    vector<ll> dp(10e6 + 10, 1e8);
    for(int i = 0; i < n; i++){
        cin >> coins[i];
        dp[coins[i]] = 1;
    }
    dp[0] = 0;
    
    ll resposta = solve(coins, dp, m);
    if(resposta == 1e8){
        cout << -1;
    }
    else{
        cout << resposta;
    }
    
    return 0;
}