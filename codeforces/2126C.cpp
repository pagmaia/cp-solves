#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    int n; int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int el = a[k - 1];
    sort(a.begin(), a.end());
    auto it = upper_bound(a.begin(), a.end(), el);
    int hatual = 0;
    for(auto i = it; it != a.end(); ++it){
        int h = *it;
        hatual += h - el;
        if(hatual > el){
            cout << "NO" << endl;
            return;
        }
        el = h;
    }
    cout << "YES" << endl;
    // 1 2 3 4 5
    // 5 5 9 15
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



