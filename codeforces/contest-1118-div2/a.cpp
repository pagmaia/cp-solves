#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){  
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(n == 1){
        cout << a[0] << endl;
        return;
    }
    else if(n == 2){
        cout << gcd(a[0], a[1]) << endl;
        return;
    }

    int g = gcd(a[0], a[n - 1]);
    cout << g << endl;
    
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



