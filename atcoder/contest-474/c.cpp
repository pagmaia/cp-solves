#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
 
void solve(){
    int n; int q;
    cin >> n >> q;
    list<int> a;
    for(int i = 0; i < n; i++){
        int f; cin >> f;
        a.push_back(f);
    }
    for(int i = 0; i < q; i++){
        int d; cin >> d;
        a.remove(d);
        a.push_back(d);
    }
    for(int c : a){
        cout << c << " ";
    }
    cout << endl;
    

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

