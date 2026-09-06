#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;

 
void solve(){
    ll n; ll c;
    cin >> n >> c;
    ll score = 0;
    vector<ll> a(n);
    ll pos = 0;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        a[i] -= c;
        if(a[i] > 0){
            pos ++;
        }
    }
    sort(a.begin(), a.end(), greater<int>());
    int l = 0;
    if(n % 2 == 1) 
        l = max((n / 2) + 1, pos);
    else{
        l = max(n / 2, pos);
    }
    for(ll i = 0; i < l; i++){
        score += a[i];
    }
    cout << score << endl;

    

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

