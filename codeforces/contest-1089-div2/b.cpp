#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    int n;
    cin >> n;
    vector<int> a(n + 1);
    vector<bool> m(n + 1, false);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int c = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] > i){
            continue;
        }
        else if(!m[i]){
            c ++;
            m[a[i]] = true;
        }
        else{
            break;
        }
    }

    cout << c << endl;

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



