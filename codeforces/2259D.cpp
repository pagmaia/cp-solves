#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 

void solve(){
    int n; cin >> n;
    vector<int> arr(n);
    int count0 = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        (!arr[i]) ? count0++ : count0 += 0;
    }
    if(!count0){
        string s = "";
        for(int i = 0; i < n; i++) s+= 'A';
        cout << "YES" << endl;
        cout << s << endl;
        return;
    }
    if(count0 == 1){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    count0 = 0;
    int mexa = 0; int mexb = 0; int mexc = 0;
    string ans = "";
    for(int i = 0; i < n; i++){
        int el = arr[i];
        if(!el and !count0){
            ans += 'A';
            count0++;
        } 
        else if(!el and count0) ans += 'B';
        else ans += 'C';
    }
    cout << ans << endl;
}	
 
int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);
 
    int t = 1;
    cin >> t;
    while(t--){
		solve();
    }
 
 
    return 0;
}

