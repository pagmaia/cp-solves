#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
 
void solve(){
    int n, m;
    cin >> n >> m;
    int x0, y0, xf, yf;
    cin >> x0 >> y0 >> xf >> yf;
    int k; cin >> k;
    vector<pair<int, int>> mv(k);
    for(int i = 0; i < k; i++){
        int a, b; cin >> a >> b;
        mv[i] = {a, b};
    }
    
    int sz = (int)mv.size();
    sort(mv.begin(), mv.end());
    for(int mask = 0; mask < (1 << sz); mask++){
        int dx = 0; int dy = 0;
        for(int i = 0; i < sz; i++){
            if(mask & (1 << i)){
                dx += mv[i].first;
                dy += mv[i].second;
            }
            if(x0 + dx > n or y0 + dy > m) break;
        }
        if(x0 + dx == xf and y0 + dy == yf){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
    //110

}	
 
int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);
 
    int t = 1;
    //cin >> t;
    while(t--){
		solve();
    }
 
 
    return 0;
}

