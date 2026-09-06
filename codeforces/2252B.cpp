#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
 
void solve(){
    int n; string s;
    cin >> n; cin >> s;
    int count0 = 0;
    int count1 = 0;
    vector<pair<int, int>> blocos;
    int start = s[0] - '0';
    int sz = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == '0') count0++;
        else count1++;

        if(s[i] - '0' == start){
            sz++;
        }
        else{
            blocos.push_back({start, sz});
            sz = 1;
            start = s[i] - '0';
        }
    }

    blocos.push_back({start, sz});
    int deltan = abs(count0 - count1);
    if(deltan > 2){
        cout << -1 << endl;
        return;
    }
    count0 = 0;
    count1 = 0;
    for(auto p : blocos){
        if(p.first) count1++;
        else count0++;
    }
    
    int deltal = abs(count0 - count1);
    int del_cmp = n - blocos.size();
    int score = del_cmp + max(0, deltan - deltal - 1);

    cout << score << endl;
    

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

