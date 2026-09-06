#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
 
void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int left = 0;
    for(int i = 0; i < m; i++){
        int del = b[i];
        if(a[i] <= del and del <= a[n - m + i]){
            continue;
        }
        else{
            cout << "NO" << endl;
            return;
        }
    }

    if(n >= 2 * m){
        cout << "YES" << endl;
        return;
    }
    else{
        cout << "NO" << endl;
        return;
    }

    
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