#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    string s; string ans;
    unordered_set<char> v = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U', 'y', 'Y'};
    cin >> s;
    for(char c : s){
        if(v.count(c)){
            continue;
        }
        else{
            ans += '.';
            ans += tolower(c);
        }
    }
    cout << ans << endl;


}


int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);

    int t;
    t = 1;
    while(t--){
	    solve();
    }


    return 0;
}



