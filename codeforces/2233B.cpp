#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
 
void solve(){
    int n; cin >> n;
    if(n % 2 == 0){
        for(int i = 1; i <= n; i += 2){
            cout << i << " " << i + 1 << " " << i + 1 << " " << i << " ";
            cout << i + 1 << " " << i << " " << i << " " << i + 1 << " ";
        }
        cout << endl;
    }
    else{
        cout << "1 1 2 1 2 3 1 3 2 2 3 3 ";
        for(int i = 4; i <= n; i += 2){
            cout << i << " " << i + 1 << " " << i + 1 << " " << i << " ";
            cout << i + 1 << " " << i << " " << i << " " << i + 1 << " ";
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

