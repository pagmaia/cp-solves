#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    ll n, m, a;
    cin >> n >> m >> a;
    ll ans = 0;
    if(n * m <= a * a){
        cout << 1 << endl;
        return;
    }
    
    ans = ((n + a - 1) / a) * ((m + a - 1) / a);

    cout << ans << endl;    

}



int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);

    int t;
    t = 1;
    while(t--){
	    solve();
    }


    return 0;
}



