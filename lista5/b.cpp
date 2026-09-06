#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    int numero;
    cin >> numero;

    if(numero == 1){
        cout << 2;
        return 0;
    }
    
    int TAMANHO = 7368787;
    vector<bool> crivo(TAMANHO);
    int contador = 1;

    for(int i = 3; i * i <= TAMANHO; i += 2){
        if(!(crivo[i])){
            for(int j = i * i; j <= TAMANHO; j += i){
                crivo[j] = true;
            }
        }
    }
    for(int i = 3; i <= TAMANHO; i += 2){
        if(!(crivo[i])){
            contador ++;
            if(contador == numero){
                cout << i;
                return 0;
            }
        }
    }

    return 0;
}