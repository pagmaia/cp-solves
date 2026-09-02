#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    int n; cin >> n;
    vector<pair<int, int>> stock(n + 1);
    for(int i = 0; i < n; i++){
        int a; int b;
        cin >> a >> b;
        stock[i + 1].first = stock[i].first + a;
        stock[i + 1].second = stock[i].second + b;
    }
    int q; cin >> q;
    for(int i = 0; i < q; i++){
        int query; cin >> query;
        double c = stock[query].first;
        double v = stock[query].second;
        double ans = (c - v) / (c + v);
        if(ans > 0){
            cout << "COMPRA" << endl;
        }
        else if(!ans){
            cout << "NEUTRO" << endl;
        }
        else{
            cout << "VENDA" << endl;
        }
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



