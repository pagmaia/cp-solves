#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    int n; int k; cin >> n >> k;
    string s; cin >> s;

    pair<int, int> score;
    for(int i = 0; i < 2 * n; i++){
        if(s[i] == '1' and s[(i + 1) % (2 * n)] == '0'){
            if(i % 2){
                score.second++;
            }
            else{
                score.first++;
            }
        }
        else if(s[i] == '1' and s[(i + 1) % (2 * n)] == '1'){
            if(i % 2){
                score.first++;
            }
            else{
                score.second++;
            }
        }
    }
    
    cout << score.first << " " << score.second << endl;
    return;
    

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



