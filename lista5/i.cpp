#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){

    ll tamanho = 100000000;
    vector<bool> crivo(tamanho);
    vector<int> primos;
    int contador = 1;

    cout << 2 << endl;
    for(int i = 2; i * i <= tamanho; i++){
        if(!(crivo[i])){
            for(int j = i*i; j <= tamanho; j += i){
                crivo[j] = true;
            }
        }
    }

    for(int i = 3; i < tamanho; i += 2){
        if(!crivo[i]){
            contador ++;
            if(!crivo[i] and contador % 100 == 1)
            primos.push_back(i);
        }
    }
    for(int p : primos){
        cout << p << endl;
    }


    return 0;
}