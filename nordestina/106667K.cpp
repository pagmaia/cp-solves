#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    ll a; ll x;
    cin >> a >> x;
    int g = gcd(a, x);
    ll ans = -1;
    if(g == 1){
        for(int i = 2; i <= 10001; i++){
            ll v = i * x;
            if((v % a) == 1 and v > a){
                ans = i;
                break;
            }
        }
    }
    cout << ans << endl;
    

}

int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);

    int t = 1;
    while(t--){
	    solve();
    }


    return 0;
}



