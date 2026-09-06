#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
 
void solve(){
    int n;
    cin >> n;
    map<int, int, greater<int>> map;
    ll sum = 0;
    int freq = 0;
    int mx = 0;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        sum += a;
        map[a]++;
        if(map[a] > freq){
            freq = map[a];
            mx = a;
        }
    }
    sum = sum - (mx * freq);
    ll ans = sum + (mx * min(n - freq + 2, freq));
    cout << ans << endl;    

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

