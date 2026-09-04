#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;
void solve(){
    deque<char> dq;
    int q; cin >> q;
    ll ans = 0;
    ll cntA = 0;
    ll cntB = 0;
    for(int i = 0; i < q; i++){
        int t; cin >> t;
        if(t == 1){
            char c; cin >> c;
            if(c == 'A') cntA++;
            else{
                cntB++;
                ans += cntA;
            }
            dq.push_back(c);
        }
        else if(t == 2){
            char c; cin >> c;
            if(c == 'B') cntB++;
            else{
                cntA++;
                ans += cntB;
            }
            dq.push_front(c);
        }
        else if(t == 3){
            char c = dq.back();
            if(c == 'A'){
                cntA--;
            } 
            else{
                cntB--;
                ans -= cntA;
            }
            dq.pop_back();
        }
        else if(t == 4){
            char c = dq.front();
            if(c == 'B') cntB--;
            else{
                cntA--;
                ans -= cntB;
            }
            dq.pop_front();
        }
        cout << ans << endl;
    }
}

// 100

int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);

    int t = 1;
    while(t--){
	solve();
    }


    return 0;
}



