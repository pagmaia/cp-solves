#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ll numero;
    cin >> numero;
    int contador = 0;
    for(int i = 2; i * i <= numero; ++i){
        int expoente = 0;
        while(numero % i == 0){
            numero = numero / i;
            expoente ++;
        }

        int sep = 1;
        while(expoente >= sep){
            expoente -= sep;
            contador ++;
            sep ++;
        }
    }

    if(numero > 1){
        contador ++;
    }


    cout << contador;
    return 0;
    
    
}