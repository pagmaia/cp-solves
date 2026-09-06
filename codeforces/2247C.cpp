#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
 
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    int sumb = 0;
    bool equal = true;
    int count = 0;
    for(int i = 0; i < n; i++){
        cin >> b[i];
        sumb += b[i];
        if(b[i] != a[i]){
            count += a[i];
        }
        if(b[i] != a[i]){
            equal = false;
        }
    }
    if(equal){
        cout << 0 << endl;
    }
    else if(!sum or sumb == n){
        cout << -1 << endl;
    }
    else if(count % 2 == 1){
        cout << 1 << endl;
    }
    else{
        cout << 2 << endl;
    }
    
    

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

