#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
 
void solve(){
    ll x, y;
    cin >> x >> y;
    ll max = x + y;
    ll minop = x;
    for(ll i = (1LL << 60LL); i >= 1LL; i >>= 1LL){
        if((max & i) and minop >= i) minop -= i;
    }
    cout << max << " " << minop << endl;

    // 1010 -> 10
    // 0110 -> 6
    // 0100 -> 4 
    // 0010 -> 2    
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

