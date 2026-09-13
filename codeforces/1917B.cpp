#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    int n; cin >> n;
    string s; cin >> s;
    set<char> seen;
    ll ans = 0;
    for(char c : s){
        if(!seen.count(c)){
            seen.insert(c);
        }
        ans += (int)seen.size();
    }
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



