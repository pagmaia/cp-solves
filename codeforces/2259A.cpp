#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
 
void solve(){
	int n; int k;
	cin >> n >> k;
	string s; cin >> s;
	int ans = 0; int cnt = 0;
	for(int i = 0; i < n; i++){
		if(s[i] == '1') cnt++;
		if(!((i + 1) % k)){
			if(cnt == k) ans++;
			cnt = 0;
		}
	}
	cout << ans << endl;
  

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

