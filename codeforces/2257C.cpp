#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    int n; cin >> n;
    vector<vector<int>> adj(n + 1);
    for(int i = 2; i <= n; i++){
        int a;
        cin >> a;
        adj[a].push_back(i);
        adj[i].push_back(a);
    }
    int m; cin >> m;
    set<int> dams;
    for(int i = 0; i < m; i++){
        int dm; cin >> dm;
        dams.insert(dm);
    }
    if(m == 1){
        cout << 0 << endl;
        return;
    }
    if(dams.count(1)){
        cout << m - 1 << " ";
        for(int c : dams){
            if(c != 1){
                cout << c << " ";
            }
        }
        cout << endl;
    }
    else{
        cout << m - 1 << " ";
        for(auto it = next(dams.begin()); it != dams.end(); it++){
            cout << *it << " ";
        }
        cout << endl;
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



