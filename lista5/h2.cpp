#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ll numero;
    cin >> numero;
    int inicial = 2;
    int expoente = 0;
    int resposta = 0;
    while(inicial * inicial <= numero){
        while(numero % inicial == 0){
            numero = numero / inicial;
            expoente ++;
        }

        if(numero / inicial == 1){
            resposta ++;
            break;
        }
        else{
            inicial ++;
            int separador = 1;
            while(expoente >= separador){
                expoente -= separador;
                resposta ++;
                separador ++;
            }
            expoente = 0;
        }
        }
        if(expoente > 0){
            int separador = 1;
            while(expoente >= separador){
                expoente -= separador;
                resposta ++;
                separador ++;
        }
    }   
        if(numero > 1){
            resposta ++;
        }
        
        cout << resposta;
        return 0;
}
    
    
    
