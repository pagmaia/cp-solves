#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    int n; int q;
    cin >> n >> q;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        int b; cin >> b;
        if(b > a[i]){
            a[i] = b;
        }
    }
    // 9 8 8
    // 4 3 7 8 -> 8 8 8 8
    //
    vector<int> pr(n + 1);
    pr[0] = 0;
    for(int i = n - 2; i >= 0; i--){
        a[i] = max(a[i + 1], a[i]);
    }
    for(int i = 0; i < n; i++){
        pr[i + 1] = pr[i] + a[i];
    }
    
    for(int i = 0; i < q; i++){
        int l; int r;
        cin >> l >> r;
        cout << pr[r] - pr[l - 1] << " ";
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



