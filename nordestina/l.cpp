#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;


void solve(){
    int n; cin >> n;
    int t = 0; int l = 0;
    for(int i = 1; i <= n; i++){
        if(i % 2){
            t += i;
        }
        else l += i;
    }
    (abs(t - l) % 2) ? cout << "IMPAR" : cout << "PAR";
    
}

int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);

    int t = 1;
    while(t--){
	solve();
    }


    return 0;
}



