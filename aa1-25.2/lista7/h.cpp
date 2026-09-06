#include "bits/stdc++.h"

#define ll long long

using namespace std;

const int MAX = 2e5 + 10;

void solve(){
    int n;
    cin >> n;
    vector<vector<int>> adj(n + 1);
    vector<int> filhos(n + 1, 0);
    for(int i = 0; i < n - 1; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        filhos[a] ++;
        filhos[b] ++;
    }
    if(n <= 3){
        cout << 0 << endl;
        return;
    }

    int folhas = 0;
    int max = 0;
    for(int i = 1; i <= n; i++){
        int cont = 0;
        for(int v : adj[i]){
            if(filhos[v] == 1){
                cont ++;
                folhas ++;
            }
        }
        if(cont > max){
            max = cont;
        }
    }

    cout << (folhas - max) << endl;

    

}

int main(){
    int t;
    cin >> t;
    while(t--){
	solve();
    }


    return 0;
}



