#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    int n; int m; cin >> n >> m;
    vector<int> a(n);
    vector<int> freq(2 * m + 1);
    int mx = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        freq[a[i]] ++;
    }
    ll ans = 0;
    vector<int> suf(m + 2);
    for(int i = m; i >= 1; i--){
        suf[i] = suf[i + 1] + freq[i];
    }
    for(int c : suf){
        cout << c << " ";
    }
    cout << endl;

    for(int i = 1; i <= m; i++){
        ll c = suf[i];
        if(2 * i <= m) c += freq[2 * i];
        ans = max(ans, c);
    }
    cout << ans << endl;
    

}
// 1 2 2 2 3 4 4
// 7 6 3



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



