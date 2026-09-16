#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
 
void solve(){
    int a, b, x;
    cin >> a >> b >> x;
    if(a == b){
        cout << 0 << endl;
        return;
    }
    int mx = max(a, b); int mn = min(a, b);
    int ans = INT32_MAX;
    int div = 0;
    while(mx != mn){
        if(mx < mn) swap(mx, mn);
        ans = min(ans, abs(mx - mn) + div);
        mx /= x;
        div++; 
    }
    ans = min(ans, div);

    cout << ans << endl;
    

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

