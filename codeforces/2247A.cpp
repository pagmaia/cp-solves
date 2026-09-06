#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
 
void solve(){
    int n;
    int sum = 0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }

    if(!sum){
        cout << "YES" << endl;
        return;
    }
    vector<pair<int, int>> dp(n);
    dp[0].first = sum + (a[0] * -2) + (a[1] * -2);
    dp[0].second = sum;

    for(int i = 1; i < n - 1; i++){
        dp[i].first = dp[i - 1].second + (a[i] * -2) + (a[i + 1] * -2);
        dp[i].second = dp[i - 1].first;
        
        if(!dp[i].first or !dp[i].second){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
    return;

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

