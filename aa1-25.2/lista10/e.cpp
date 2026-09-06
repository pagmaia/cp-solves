#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve(){
    int l1, l2, l3, b1, b2, b3;
    cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
    int somal = l1 + l2 + l3;
    int somab = b1 + b2 + b3;
    if(l1 == l2 and l2 == l3 and l3 == somab or b1 == b2 and b2 == b3 and b3 == somal){
        cout << "YES" << endl;
        return;
    }
    if(l2 == l3 and l1 + l3 == b1 and b1 == b2 + b3 or 
        b2 == b3 and b1 + b3 == l1 and l1 == l2 + l3){
        cout << "YES" << endl;
        return;
    }
    
    cout << "NO" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}