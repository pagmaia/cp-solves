#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    int tamanho;
    cin >> tamanho;
    ll limite = 1000000;
    vector<ll> array(tamanho);
    vector<ll> contador(limite);
    for(int i = 0; i < tamanho; ++i){
        cin >> array[i];
        contador[array[i]] += 1;
    } 

    for(int i = limite; i >= 1; --i){
        ll divisores = 0;
        for(int j = i; j <= limite; j += i){
            divisores += contador[j];
            
        }
        if(divisores >= 2){
            cout << i;
            return 0;
        }
    }
    cout << 1;
    return 0;
}