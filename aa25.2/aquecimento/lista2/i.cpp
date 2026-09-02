#include <bits/stdc++.h>

using namespace std;

#define ll long long

void binarysearch(vector<int> producao, int target){
    ll ini = 0;
    ll fim = 1e18;
    ll resposta = 0;
    while(ini <= fim){
        ll maquinas = 0;
        ll mid = ini + (fim - ini) / 2;
        for(ll tempo : producao){
            maquinas += mid / tempo;
            if(maquinas >= target){
                break;
            }
        }

        if(maquinas >= target){
            resposta = mid;
            fim = mid - 1;
        } 
        else{
            ini = mid + 1;
        }
    }

    cout << resposta << endl;
}

int main(){
    int nmaquinas, target, maquina = 0;
    vector<int> producao;
    cin >> nmaquinas >> target;

    for(int i = 0; i < nmaquinas; ++i){
        cin >> maquina;
        producao.push_back(maquina);
    }

    binarysearch(producao, target);

    return 0;
}
