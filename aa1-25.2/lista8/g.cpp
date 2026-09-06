#include "bits/stdc++.h"

#define ll long long

using namespace std;


void solve(){
    int n;
    cin >> n;

    vector<int> p(n);
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> p[i];
        a[i] = 2 * n - p[i];
    }
    
    int resposta = 0;
    for(int i = 0; i < n; i++){
        int invesq = 0;
        int invdir = 0;
        for(int j = 0; j < i; j++){
            if(p[j] > p[i]){
                invesq ++;
            }
        }
        for(int j = i + 1; j < n; j++){
            if(2 * n - p[i] > 2 * n - p[j]){
                invdir ++;
            }
        }
        
        resposta += min(invesq, invdir);
        
    }

    cout << resposta << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
	    solve();
    }


    return 0;
}



