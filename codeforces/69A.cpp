#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    int n; cin >> n;
    int x = 0; int y = 0; int z = 0;
    for(int i = 0; i < n; i++){
        int a; int b; int c;
        cin >> a >> b >> c;
        x+= a; y += b; z += c;
    }
    if(!x and !y and !z) cout << "YES" << endl;
    else cout << "NO" << endl;




}



int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);

    int t = 1;
    while(t--){
	solve();
    }


    return 0;
}



