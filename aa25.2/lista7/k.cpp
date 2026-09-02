#include "bits/stdc++.h"

#define ll long long

using namespace std;


int dfsRec(int pos, vector<vector<int>> &adj, vector<int> &distance){
    for(int v : adj[pos]){
        if(distance[v] == -1){
            distance[v] = distance[pos] + 1;
            return(dfsRec(v, adj, distance));
        }
        else{
            return distance[pos] + 1;
        }
    }

}


void solve(){
    int n;
    cin >> n;
    vector<int> d(n);
    vector<vector<int>> adj(n + 1);
    vector<int> distance(n + 1, -1);
    
    for(int i = 1; i <= n; i++){
        int a;
        cin >> a;
        adj[a].push_back(i);
    }
    
    for(int i = 0; i < n; i++){
        cin >> d[i];
    }
    int resposta = 0;
    for(int i = 0; i < n; i++){
        if(distance[d[i]] == -1){
            distance[d[i]] = 0;
            resposta += dfsRec(d[i], adj, distance);
        }
        cout << resposta << " ";

    }
    cout << "\n";

}



int main(){
    int t;
    cin >> t;
    while(t--){
	    solve();
    }

    return 0;
}



