#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    int tamanhoa, tamanhob;
    cin >> tamanhoa >> tamanhob;
    vector<ll> a(tamanhoa), b(tamanhob);

    for(int i = 0; i < tamanhoa; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < tamanhob; ++i){
        cin >> b[i];
    }

    sort(a.begin(), a.end());

    for(int i = 0; i < tamanhob; ++i){
        ll ini = 0, fim = tamanhoa - 1;

        while(ini <= fim){
        ll mid = ini + (fim - ini) / 2;

        if(a[mid] > b[i]){
            fim = mid - 1;
        }
        else{
            ini = mid + 1;
        }

    }
    cout << ini << " ";

    }
    
    return 0;
}