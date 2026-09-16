#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
 
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    

    ll ans = LLONG_MAX; ll sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
        ans = min(ans, sum / (i + 1));
        cout << ans << " ";

    }
    cout << endl;
}	
 
int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);
 
    int t = 1;
    cin >> t;
    while(t--){
		solve();
    }
 
 
    return 0;
}

