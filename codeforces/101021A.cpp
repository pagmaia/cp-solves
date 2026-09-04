#include "bits/stdc++.h"

#define ll long long

using namespace std;


void solve(){
    int ini = 1; int fim = 1000000; int ans = 0;
    while(ini <= fim){
        int mid = ini + (fim - ini) / 2;
        cout << mid << endl;
        string rp; cin >> rp;
        if(rp[0] == '<'){
            fim = mid - 1;
        }
        else{
            ans = mid;
            ini = mid + 1;
        }
    }
    cout << "! " << ans << endl;

}



int main(){
    int t = 1;
    while(t--){
	solve();
    }


    return 0;
}



