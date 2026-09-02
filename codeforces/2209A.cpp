#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;

void solve(){
    ll n, c, k;
    cin >> n >> c >> k;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++){
        if(a[i] <= c){
            ll f = min(c - a[i], k);
            k -= f;
            c += a[i] + f;
        }
        else{
            break;
        }
    }
    cout << c << endl;

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



