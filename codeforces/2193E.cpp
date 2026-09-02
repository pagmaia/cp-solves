#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;
const ll MAX = 1e9 + 10;

void solve(){
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> dp(n + 1, MAX);

    for(int i = 0; i < n; i++){
        cin >> a[i];
        dp[a[i]] = 1;
    }

    for(int i = 1; i < n + 1; i++){
        for(int j = i; j <= n; j += i){
            dp[j] = min(dp[j], dp[i] + dp[j / i]);
        }
    }
    // para cada divisor i, percorre sobre os multiplos j

    for(int i = 1; i <= n; i++){
        if(dp[i] == MAX){
            dp[i] = -1;
        }
        cout << dp[i] << " ";
    }
    cout << endl;

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



