#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    ll p; ll q;
    cin >> p >> q;
    if(p >= q) cout << "Alice" << endl;
    else{
        ll df = q - p;
        if(min(p / 2, q / 3) >= df) cout << "Bob" << endl;
        else cout << "Alice" << endl;
    }
    
    
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



