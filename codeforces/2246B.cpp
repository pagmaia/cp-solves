#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
 
void solve(){
    int n; cin >> n;
    if(n == 1) cout << 1 << endl;
    else if(n == 2) cout << -1 << endl;
    else{
        ll start = 3;
        cout << "1 2 3 ";
        for(int i = 0; i < (n - 3); i++){
            cout << start * 2 << " ";
            start *= 2;
        }
        cout << endl;
    }

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

