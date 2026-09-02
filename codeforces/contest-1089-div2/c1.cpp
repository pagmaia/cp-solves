#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    int op = 0;
    if(gcd(a[0], a[1]) < a[0]){
        op ++;
    }
    for(int i = 1; i < n - 1; i++){
        ll antes = gcd(a[i - 1], a[i]);
        ll depois = gcd(a[i], a[i + 1]);
        if(lcm(antes, depois) < a[i]){
            op ++;
        }
    }
    if(gcd(a[n - 2], a[n - 1]) < a[n - 1]){
        op ++;
    }

    cout << op << endl;
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



