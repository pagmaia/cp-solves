#include <bits/stdc++.h>

#define ll long long

using namespace std;

void divisores(int numero){
    int contador = 0;
    for(int i = 1; i <= sqrt(numero); ++i){
        if(numero % i == 0){
            if(numero / i == i){
                contador ++;
            }
            else{
                contador += 2;
            }
        }
    }
    cout << contador << endl;
}
int main(){
    int numeros;
    cin >> numeros;

    for(int i = 0; i < numeros; ++i){
        int numero;
        cin >> numero;
        divisores(numero);
    }
    
    return 0;
}