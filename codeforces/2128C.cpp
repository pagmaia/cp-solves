#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void test(){
    int n; cin >> n;
    vector<int> b(n);
    for(int i = 0; i < n ; i++){
        cin >> b[i];
    }
    int mn = b[0];
    for(int i = 1; i < n; i++){
        int df = b[i] - mn;
        if(df >= mn){
            cout << "NO" << endl;
            return;
        }
        mn = min(mn, b[i]);
    }
    cout << "YES" << endl;
}



int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
	test();
    }


    return 0;
}



