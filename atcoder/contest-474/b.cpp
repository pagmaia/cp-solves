#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
 
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int start = 10;
    for(int i = 0; i < n; i++){
        if(a[i] > start){
            cout << "No" << endl;
            return;
        }
        if(!((i + 1) % 10)) start += 10;
    }
    cout << "Yes" << endl;
}	
 
int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);
 
    int t = 1;
    //cin >> t;
    while(t--){
		solve();
    }
 
 
    return 0;
}

