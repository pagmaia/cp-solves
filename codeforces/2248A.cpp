#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
 
void solve(){
    string s;
    cin >> s;

    int l = 0;
    int r = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0'){
            r = i;
            break;
        }
    }
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            l = i;
            break;
        }
    }
    for(int i = 0; i < s.size(); i++){
        if(i == l or i == r){
            continue;
        }
        if(s[i] == '0'){
            cout << 0;
        }
        else{
            cout << 1;
        }
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

