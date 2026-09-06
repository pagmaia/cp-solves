#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
 
void solve(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    int cx = 0;
    vector<int> xbag(n);
    int idx = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'x'){
            cx++;
            xbag[idx++] = i;
        }
        

    }
    for(int k = 1; k <= n; k++){
        if(cx < k){
            cout << n << endl;
        }
        else{
            cout << xbag[k - 1] + 1 << endl;
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

