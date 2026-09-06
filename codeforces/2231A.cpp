#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
 
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    
    //12 11 10 9 8 7
    for(int i = 0; i < n; i++){
        cout << (2 * n) - i << " ";
    }
    cout << endl;
    
    

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

