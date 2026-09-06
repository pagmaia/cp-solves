#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
    unsigned ll resultado = 0;
    unsigned ll expoente;

    for(int i = 0; i < 64; ++i){
        cin >> expoente;
        resultado += expoente << i;

    }
    cout << resultado;

    return 0;