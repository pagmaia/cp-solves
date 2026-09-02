#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int score = 4;
    vector<string> pos = {"01", "10", "00", "11"};
    for(string &p : pos){
        int i = 0;
        while(p.size() < n){
            if(p[i] == '0') p+= '1';
            if(p[i] == '1') p+= '0';
            i++;
        }
    }
    
    for(string p : pos){
        for(int i = 0; i < n; i++){
            if(s[i] != p[i] and s[i] != '?'){
                score--;
                break;
            }
        }
    }
    cout << score << endl;

    
    

    //00110
    
    //01???? ->01100
    //10???? ->10011
    //00???? ->00110
    //11???? ->11001

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



