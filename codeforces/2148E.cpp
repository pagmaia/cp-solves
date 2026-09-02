#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    ll n; ll k; cin >> n >> k;
    vector<ll> a(n + 1);
    vector<ll> count(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        count[a[i]]++;
    }
    for(int c : count){
        if(c % k){
            cout << 0 << endl;
            return;
        }
    }

    ll score = 0;
    ll l = 1;

    vector<ll> cnt(n + 1);
    ll r = l;
    while(r <= n){
        cnt[a[r]]++;
        while(cnt[a[r]] > (count[a[r]] / k)){
            cnt[a[l]]--;
            l++;
        }
        score += r - l + 1;
        r++;
    }
        
    cout << score << endl;
}



int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
	solve();
    }


    return 0;
}



