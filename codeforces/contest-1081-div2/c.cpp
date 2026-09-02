#include "bits/stdc++.h"

#define ll long long

using namespace std;


void solve(){
    int n, h, k;
    cin >> n >> h >> k;
    vector<int> dano(n);
    vector<int> prefixsum(n + 1);
    prefixsum[0] = 0;
    int idx = 0;
    int maior = 0;
    for(int i = 0; i < n; i++){
        cin >> dano[i];
        if(dano[i] > maior){
            maior = dano[i];
        }
        prefixsum[i + 1] = prefixsum[i] + dano[i];
        if(prefixsum[i + 1] >= h){
            idx = i + 1;
        }
    }
    








}



int main(){
    int t;
    cin >> t;
    while(t--){
	solve();
    }


    return 0;
}



