#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);
    int nvacas; int queries;
    cin >> nvacas >> queries;
    vector<vector<ll>> vacas(nvacas + 1);
    vacas[0] = {0};

    int numero; ll count1 = 0; ll count2 = 0; ll count3 = 0;

    for(int i = 1; i <= nvacas; ++i){
        cin >> numero;
        if(numero == 1) count1 ++;
        else if(numero == 2) count2 ++;
        else count3++;
        vector<ll> contagem = {count1, count2, count3};
        vacas[i] = contagem;        
    }
    for(int i = 0; i < queries; ++i){
        int l; int r;
        cin >> l >> r;
        cout << vacas[r][0] - vacas[l - 1][0] << " " << vacas[r][1] - vacas[l - 1][1] << " " << vacas[r][2] - vacas[l - 1][2] << endl;
    }

    return 0;
}

