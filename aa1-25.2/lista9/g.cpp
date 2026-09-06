#include <bits/stdc++.h>

#define ll long long

using namespace std;

int solve(vector<ll> &seq, int n){
    map<int, int> dp;
    int resposta = 0;
    
    for(int i = 0; i < n; i++){
        dp[seq[i]] = max(dp[seq[i]], dp[seq[i] - 1] + 1);
        resposta = max(resposta, dp[seq[i]]);
    }
        
    return resposta;
}

int main(){
    int n;
    cin >> n;
    vector<ll> seq(n);
    for(int i = 0; i < n; i++){
        cin >> seq[i];
    }
    
    cout << solve(seq, n);
    
    return 0;
}