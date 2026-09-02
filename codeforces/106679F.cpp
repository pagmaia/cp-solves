#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    ll n; cin >> n;

    vector<int> rec(3 * n + 10);
    rec[1] = 2;
    for(int i = 1; i <= n; i++){
        if(!rec[i]) rec[i] = rec[i - 1] + 1;
        rec[rec[i]] = 3 * i;
    }
    cout << rec[n] << endl;

    
    // 1 - 2
    // 2 - 3
    // 3 - 6
    // 4 - 7
    // 5 - 8
    // 6 - 9
    // 7 - 12
    // 8 - 15
    // 9 - 18
    
    
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



