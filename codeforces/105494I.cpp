#include "bits/stdc++.h"
 
#define ll long long
 
using namespace std;
 
const ll MAX = 2e5 + 10;
vector<pair<ll, ll>> dp(MAX);
vector<ll> a(MAX);
ll n;
 
void solve(){
    dp[0].first = a[0];
    dp[0].second = a[0] * 2;
    for(int i = 1; i < n; i++){
        dp[i].first = max(dp[i - 1].first, dp[i - 1].second) + a[i];
        dp[i].second = dp[i - 1].first + a[i] * 2;
    }
 
    cout << max(dp[n - 1].first, dp[n - 1].second) << "\n";
 
    string saida;
    bool pode = true;
 
    if(dp[n - 1].second > dp[n - 1].first){
        pode = false;
        saida += 'M';
    }
    else{
        saida += 'O';
    }
 
    for(int i = n - 2; i >= 0; i--){
        if(dp[i].second > dp[i].first and pode){
            saida += 'M';
            pode = false;
        }
        else{
            saida += 'O';
            pode = true;
        }
    }
 
    reverse(saida.begin(), saida.end());
    cout << saida;
 
}
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    solve();
 
    return 0;
}