#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    int n; cin >> n;
    string s; cin >> s;
    vector<pair<int, int>> blocks;
    int sz = 0;
    char start = s[0];
    int count0 = 0;
    int count1 = 0;
    if(start == '1') count1++;
    else count0++;

    for(int i = 0; i < n; i++){
        if(s[i] == start) sz++;
        else{
            if(s[i] == '1') count1++;
            else count0++;
            start = s[i];
            sz = 0;
        }
    }
    if(count1 == count0 and count1 == 1){
        cout << 2 << endl;
    }
    else cout << 1 << endl;


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



