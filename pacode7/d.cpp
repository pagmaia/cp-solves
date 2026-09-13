#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
 
void solve(){
	int n; int m; cin >> n >> m;
	vector<int> red(n); vector<int> blue(m);
	for(int i = 0; i < n; i++) cin >> red[i];
	for(int i = 0; i < m; i++) cin >> blue[i];
	sort(blue.begin(), blue.end());
	sort(red.begin(), red.end());
	int t; cin >> t;
	for(int i = 0; i < t; i++){
		int c; int x;
		cin >> c >> x;
		if(c == 1){
			int pos = upper_bound(blue.begin(), blue.end(), x) - blue.begin();
			cout << m - pos << endl;
		}
		else if(c == 2){
			int pos = upper_bound(red.begin(), red.end(), x) - red.begin();
			cout << n - pos << endl;
		}
	}

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

