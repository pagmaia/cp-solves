#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 

void solve(){
    int n;
    cin >> n;
    vector<int> seq(2 * n);
    int f0 = -1;
    int f1 = -1;
    for(int i = 0; i < 2 * n; i++){
        cin >> seq[i];
        if(seq[i] == 0){
            f0 = i;
        }
        if(seq[i] == 0 && f0 != -1){
            f1 = i;
        }
    }
    set<int> elem;
    for(int i = 0; i <= n; i++){
        elem.insert(i);
    }
    while(f0 >= 0 and f1 < 2 * n and seq[f0] == seq[f1]){
        elem.erase(seq[f0]);
        f0--;
        f1++;
    }
    cout << *elem.begin() << endl;
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

