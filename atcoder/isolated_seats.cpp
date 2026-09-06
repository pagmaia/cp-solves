#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
 
void solve(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'x'){    
            if(i - 1 < 0 or s[i - 1] == 'x'){
                if(i + 1 >= n or s[i + 1] == 'x'){
                    ans++;
                }
            }

        }
    }

    cout << ans << endl;

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

