#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    vector<int> a(7);
    int s = 0;
    for(int i = 0; i < 7; i++){
        cin >> a[i];
        s -= a[i];
    }
    cout << s + 2 * *max_element(a.begin(), a.end())  << endl;
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



