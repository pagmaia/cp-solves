#include <bits/stdc++.h>

using namespace std;

int main(){
    int ncriancas;
    int resultado = 0;
    cin >> ncriancas;
    vector<int> grupos(ncriancas);
    vector<int> quantidades(5);

    for(int i = 0; i < ncriancas; ++i){
        int grupo;
        cin >> grupo;
        grupos[i] = grupo;
        quantidades[grupo] ++;
    }
    resultado += quantidades[4];
    resultado += quantidades[2] * 2 / 4;    
    if(quantidades[2] * 2 % 4 == 0){
        quantidades[2] = 0;
    }
    else{
        quantidades[2] = 1;
    }
    
    if(quantidades[1] == 0){
        resultado += quantidades[3];
    }
    else{
        resultado += min(quantidades[1], quantidades[3]);
        if(quantidades[1] > quantidades[3]){
            quantidades[1] -= quantidades[3];
            quantidades[3] = 0;
        }
        else{
            quantidades[3] -= quantidades[1];
            resultado += quantidades[3];
            quantidades[1] = 0;
        }     
    }
    int total = quantidades[1] + quantidades[2] * 2;
    resultado += total / 4;
    if(total % 4 > 0){
        resultado ++;
    }
           
    cout << resultado;
    return 0;
}
