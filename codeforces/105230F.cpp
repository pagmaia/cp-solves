#include "bits/stdc++.h"

#define ll long long

using namespace std;

bool tentativa(ll n, vector<ll> &d, vector<ll> h, bool start){
    bool t = false;
    if(start){
        for(int i = 0; i < n - 1; i++){
            if(h[i] <= d[i]){
                t = true;
            }
            h[i + 1] = max(h[i + 1], h[i] - d[i]);
        }
        return t;
    }
    else{
        for(int i = n - 1; i >= 1; i--){
            if(h[i] <= d[i - 1]){
                t = true;
            }
            h[i - 1] = max(h[i - 1], h[i] - d[i - 1]);
        }
        return t;
    }
    return t;
}


string solve(){
    ll n;
    cin >> n;
    bool start = true;
    vector<ll> h(n);
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }
    vector<ll> d(n);
    for(int i = 0; i < n - 1; i++){
        cin >> d[i];
    }

    if(tentativa(n, d, h, true) and tentativa(n, d, h, false)){
        return "which";
    }
    return "habibi";

}

int main(){
    int t;
    cin >> t;
    while(t--){
        cout << solve() << "\n";
    }
}