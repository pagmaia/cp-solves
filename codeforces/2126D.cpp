#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    int n; int k; cin >> n >> k;
    vector<vector<int>> a(n, vector<int>(3));
    for(int i = 0; i < n; i++){
        int l; int r; int f;
        cin >> l >> r >> f;
        a[i][0] = l;
        a[i][1] = r;
        a[i][2] = f;
    }
    sort(a.begin(), a.end(), [](const auto &a, const auto &b){
        return a[0] < b[0];
    });
    for(int i = 0; i < n; i++){
        if(a[i][0] > k){
            break;
        }
        k = max(k, a[i][2]);
    }
    cout << k << endl;



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



