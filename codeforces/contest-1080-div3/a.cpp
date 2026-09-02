#include "bits/stdc++.h"

#define ll long long

using namespace std;

void solve(){
    int n;
    cin >> n;
    bool sixseven = false;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a == 67) sixseven = true;
    }

    if(sixseven) cout << "YES" << endl;
    else cout << "NO" << endl;
    return;

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }



    return 0;
}



