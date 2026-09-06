#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
 
void solve(){
    int n; string s;
    cin >> n; cin >> s;
    vector<pair<char, int>> sz;
    int l = 0;
    while(l <= n - 1){
        int r = l + 1;
        while(r <= n - 1){
            if(s[l] != s[r]){
                sz.push_back({s[l], r - l});
                break;
            }
            r++;
        }
        if(r == n){
            sz.push_back({s[l], r - l});
        }
        l = r;
    } 
    
    int ans = sz.size();
    bool db = false;
    bool del = false;
    for(int i = 1; i < sz.size() - 1; i++){
        if(sz[i].second == 1 and sz[i - 1].first == sz[i + 1].first){
            db = true;
            break;
        }
        else if(sz[i].second == 1){
            del = true;
        }
    }
    if(db){
        ans -= 2;
        cout << ans << endl;
        return;
    }
    if(del){
        ans --;
        cout << ans << endl;
        return;
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

