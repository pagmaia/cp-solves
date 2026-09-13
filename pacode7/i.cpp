//https://codeforces.com/group/JY6ka5uI3P/contest/714668/problem/I

#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
 
void solve(){
    int n; cin >> n;
    int ans = 0;
    for(int i = 1; i < (int)sqrt(n) + 1; i++){
        if(!(n % i)){
            ans++;
            ans += (n / i == i) ? 0 : 1;
        }
    }
    cout << ans << endl;
    

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

