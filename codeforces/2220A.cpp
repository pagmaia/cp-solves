#include "bits/stdc++.h"

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> seen;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    sort(a.begin(), a.end(), greater<int>());
    for(int i = 0; i < n; i++){
        if(a[i] == a[i + 1]){
            cout << -1 << endl;
            return;
        }
    }

    for(int x : a){
        cout << x << " ";
    }
    cout << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

}