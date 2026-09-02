#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    int n; int m;
    cin >> n >> m;
    vector<int> let(26);
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        let[s[0] - 'a'] = 1;
    }
    bool ok = true;
    for(int i = 0; i < m; i++){
        string abv; cin >> abv;
        for(char c : abv){
            if(!let[c - 'A']){
                ok = false;
            }
        }
    }
    (!ok) ? cout << "NO" << endl : cout << "YES" << endl;;
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



