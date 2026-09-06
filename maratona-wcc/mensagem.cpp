#include "bits/stdc++.h"

using namespace std;
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll,ll>;

#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

void solve(){
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	int count1 = 0;
	for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            count1++;
        }
    }
    string ans = "";
    if(count1 > k){
        for(int i = 0; i < n; i++){ 
            if(s[i] == '1' and k > 0){
                ans += '0';
                k--;
            }
            else{
                ans += s[i];
            }
        }
    }
    else{
        for(int i = 0; i < n - k; i++){
            ans += '0';
        }
    }
    cout << ans << "\n";

}



int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		solve();
	}	


}