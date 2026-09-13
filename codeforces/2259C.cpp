#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;
 
 
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int maxdist = 0;
    int first = -1;
    for(int i = 0; i < n; i++){
        if(a[i] == 1 or a[i] == -1){
            first = i;
            break;
        }
    }
    pair<int, int> pos = {first, -1};
    for(int i = first + 1; i < n; i++){
        if(a[i] == 1){
            pos = max(pos, {first, i}, [](const auto &a, const auto &b){
                return a.second - a.first < b.second - b.first;
            });
            first = i;
        } 
        else if(a[i] == -1){
            pos = max(pos, {first, i}, [](const auto &a, const auto &b){
                return a.second - a.first < b.second - b.first;
            });
            first = min(first, i);
        } 
    }	
    if(pos.first != -1) a[pos.first] = 1;
    if(pos.second != -1) a[pos.second] = 1;
    
    for(int i = 0; i < n; i++){
        if(a[i] == -1 and i != pos.first and i != pos.second) a[i] = 0;
        cout << a[i] << " ";
    }
    cout << endl;
    
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
