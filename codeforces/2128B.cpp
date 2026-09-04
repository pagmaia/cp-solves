#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


// 1 2 3 4 6 5
// 1 2 3 5 4 6

void solve(){
    int n; cin >> n;
    deque<int> dq;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        dq.push_back(a);
    }
    string ans = "";
    for(int i = 1; i <= n; i++){
        int f = dq.front();
        int b = dq.back();
        if(!(i % 2)){
            int mx = max(f, b);
            if(mx == f){
                ans += 'L';
                dq.pop_front();
            }
            else{
                ans += 'R';
                dq.pop_back();
            }
        }
        else{
            int mn = min(f, b);
            if(mn == f){
                ans += 'L';
                dq.pop_front();
            }
            else{
                ans += 'R';
                dq.pop_back();
            }
        }
    }
        
    cout << ans << endl;
    
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



