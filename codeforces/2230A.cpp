#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
 
void solve(){
    ll n, a, b;
    cin >> n >> a >> b;
    ll ans = 0;
    ll op1 = n * a;
    ll op2 = (n % 3) * a + (n / 3) * b;
    ll op3 = (((n / 3) + 1) * b);
    
    ans = min(min(op1, op2), op3);
    cout << ans << endl;

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

