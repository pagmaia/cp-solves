#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    string s; cin >> s;
    vector<string> seq = {"010", "110", "111", "101", "100", "000", "001", "011"};
    int start = 0;
    for(int i = 0; i < 8; i++){
        if(seq[i] == s){
            start = i;
            break;
        }
    }
    for(int i = 0; i < 9; i++){
        int idx = (start + i) % 8;
        cout << seq[idx] << endl;
    }

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



