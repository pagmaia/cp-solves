#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    int n; cin >> n;
    string a; string b;
    cin >> a >> b;
    pair<vector<ll>, vector<ll>> par;
    pair<vector<ll>, vector<ll>> impar;
    for(int i = 0; i < n; i++){
        if(!(i % 2) and a[i] == '1') par.first.push_back(i);
        if(!(i % 2) and b[i] == '1') par.second.push_back(i);
        if(i % 2 and a[i] == '1') impar.first.push_back(i);
        if(i % 2 and b[i] == '1') impar.second.push_back(i);
    }
    if(par.first.size() != par.second.size() or impar.first.size() != impar.second.size()){
        cout << -1 << endl;
        return;
    }
    ll ans = 0;
    for(int i = 0; i < par.first.size(); i++){
        ans += abs(par.first[i] - par.second[i]);
    }
    for(int i = 0; i < impar.first.size(); i++){
        ans += abs(impar.first[i] - impar.second[i]);
    }
    cout << ans / 2 << endl;


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



