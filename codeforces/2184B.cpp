#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    int s, k, m;
    cin >> s >> k >> m;
    int ladoa = max(0, s - k);
    int ladob = min(s, k);
    int flips = m / k;
    int r = m % k;
    if(flips % 2 == 1){
        cout << max(0, ladob - r) << endl;
    }
    else{
        cout << max(0, s - r) << endl;
    }
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



