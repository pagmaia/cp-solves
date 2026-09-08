#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    int n; cin >> n;
    vector<int> a(n); vector<pair<int,int>> c(n); vector<int> b(n);
    set<int> seen;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        seen.insert(a[i]);
    }
    for(int i = 0; i < n; i++) cin >> b[i];
    if(*max_element(a.begin(), a.end()) > b[n - 1]){
        cout << -1 << endl;
        return;
    }
    for(int i = 0; i < n; i++){
        if(a[i] < b[i] and !seen.count(b[i])){
            seen.insert(b[i]);
            a[i] = b[i];
        }
        c[i] = {a[i], i};
    }
    sort(c.begin(), c.end());
    for(int i = 0; i < n; i++){
        if(c[i].first == b[i]) continue;
        else{
            a[c[i].second] = b[i];
        }
    }
    for(int c : a){
        cout << c << " ";
    }
    cout << endl;
    

    
    

    





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



