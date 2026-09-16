#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 

ll MOD = 998244353;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    vector<int> suf(n + 1);
    for(int i = n - 1; i >= 0; i--) suf[i] = suf[i + 1] + a[i];
   
    
    




}	
 
int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);
 
    int t = 1;
    cin >> t;
    while(t--){
		solve();
    }
 
 
    return 0;
}

