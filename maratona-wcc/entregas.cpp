#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
 
void solve(){
    int n;
    cin >> n;
    vector<vector<int>> adj(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> adj[i][j];
        }
    }
    
    for(int k = 0; k < n; k++){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(adj[i][k] + adj[k][j] < adj[i][j]){
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }

    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        int s, g, d;
        cin >> s >> g >> d;
        int dis = adj[s][g] + adj[g][d];
        int dif = max(0, dis - adj[s][d]);
        cout << dis << " " << dif << endl;
    }
    
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

