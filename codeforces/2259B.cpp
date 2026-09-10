#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
 
void solve(){
    int n; cin >> n;
    int imp = 0; int par0 = 0; int par2 = 0;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        if(a % 2) imp++;
        else if(!(a % 2) and (a % 4)) par0++;
        else if(!(a % 4)) par2++;
    }
    cout << max(imp, max(par0, par2)) << endl;

    // 6 7 8 - > 4 5 6 -> 2 3 4- > 0 1 2 -> 2 1 0 ->
    // 2 4 6 -> 0 2 4 -> 2 0 2 -> 0 2 0

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

