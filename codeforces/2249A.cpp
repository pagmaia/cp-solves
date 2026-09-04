#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;

void solve(){
    int n; cin >> n;

    vector<pair<pair<int,int>, pair<int,int>>> intvs(n + 1);
    
    for(int i = 1; i <= n; i++){
        int l; int r; int u; int v;
        cin >> l >> r >> u >> v;
        intvs[i] = {{l, r}, {u, v}};
    }
    int ans = 0;
    for(int m = n; m >= 1; m--){
        int j = 1;
        for(int i = 1; i <= n; i++){
            pair<int, int> left = intvs[i].first;
            pair<int, int> right = intvs[i].second;
            int limit = m - j + 1;
            if((j < left.first or j > left.second) and (limit < right.first or limit > right.second)) j++;
            if(j > m){
                cout << m << endl;
                return;
            }
        }
    }
    
    cout << 0 << endl;
    
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



