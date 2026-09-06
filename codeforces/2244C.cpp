#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
void solve(){
    int n; int x; int y;
    cin >> n >> x >> y;
    int mdc = gcd(x, y);
    bool can = true;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if((i + 1) % mdc != a % mdc){
            can = false;
        }
    }

    if(can) cout << "YES" << endl;
    else cout << "NO" << endl;

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

