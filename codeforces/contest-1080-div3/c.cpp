#include "bits/stdc++.h"

#define ll long long

using namespace std;


void solve(){
    int n;
    cin >> n;
    vector<int> seq(n);
    for(int i = 0; i < n; i++){
        cin >> seq[i];
    }

    int tam = 1;
    int resposta = 0;
    int start = seq[0];
    for(int i = 1; i < n; i++){
        if(seq[i] == start or seq[i] == (7 - start) or start == (7 - seq[i])) tam ++;
        else{
            start = seq[i];
            if(!tam){
                continue;
            }
            else{
                resposta += tam / 2;
                tam = 1;
            }
            
        }
    }
    
    resposta += tam / 2;

    cout << resposta << endl;


}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}



