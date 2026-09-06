#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
 
void solve(){
    string s;
    cin >> s;
    int ans = 0;
    for(int i = 0; i < s.length() - 1; i++){
        if(s[i] == s[i + 1]) ans ++;
    }
    if(ans <= 2){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}
//abbaba
//01010
//aaaaa
//11111

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

