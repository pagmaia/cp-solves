#include "bits/stdc++.h"

using namespace std;

#define ll long long

void solve(){
    ll n;
    cin >> n;

    if((n & (n - 1)) == 0){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    return;

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }



}