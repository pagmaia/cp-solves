#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ll tamanho;
    cin >> tamanho;
    ll valores[tamanho];

    for(int i = 0; i < tamanho; ++i){
        cin >> valores[i];
    }

    int l = 0; int r = tamanho - 1;
    ll soma1 = 0; ll soma2 = 0; ll resposta = 0;

    while(l <= r){
        if(soma1 > soma2){
            soma2 += valores[r];
            r--;
        }
        else{
            soma1 += valores[l];
            l++;
        }
        if(soma1 == soma2){
            resposta = soma1;
        }
    }
    cout << resposta << endl;

    return 0;
}
