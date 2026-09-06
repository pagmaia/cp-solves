#include <bits/stdc++.h>

#define ll long long

using namespace std;


void solve(){
    ll x, y;
    cin >> x >> y;
    ll a = x;
    while(a < y){
        a += x;
        if(a % x == 0 && y % a != 0){
            cout << "YES" << endl;
            return;
        } 
    }

    cout << "NO" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}