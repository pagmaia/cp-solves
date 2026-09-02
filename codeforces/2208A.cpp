#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    int n;
    cin >> n;
    unordered_map<int, int> num;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int a;
            cin >> a;
            if(!num.count(a)){
                num[a] = 1;
            }
            else{
                num[a] ++;
            }
        }
    }

    for(auto p : num){
        if(p.second > (n * n) - n){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
// 1 2 2
// 2 2 1
// 2 1 2



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



