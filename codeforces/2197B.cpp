#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> pos;
   
    for(int i = 0; i < n; i++){
        int el;
        cin >> el;
        pos[el] = i;
    }
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int e = -1;
    for(int i = 0; i < n; i++){
        if(e > pos[a[i]]){
            cout << "NO" << endl;
            return;
        }
        e = pos[a[i]];
    }
    cout << "YES" << endl;
    
}

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
	solve();
    }


    return 0;
}


