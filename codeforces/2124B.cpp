#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    int n; cin >> n;
    vector<int> a(n);
    vector<int> prefix(n + 1);
    prefix[0] = n + 1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        prefix[i + 1] = min(prefix[i], a[i]);
    }
    if(n > 2){
        prefix[2] = min(a[1] + a[2], prefix[2]);
    }
    cout << prefix[1] + prefix[2] << endl;

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



