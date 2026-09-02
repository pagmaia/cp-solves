#include <bits/stdc++.h>

using namespace std;

int solve(int maximo, int multiplo){
    unsigned long long resultado = 0;

    for(int i = multiplo; i <= maximo; i += multiplo)
    {
        resultado += i;
    }
    return resultado;
}

int main(){
    int maximo;
    int a;
    int b;

    cin >> maximo >> a >> b;

    unsigned long long resultadofinal = maximo * (maximo + 1) / 2;

    resultadofinal -= solve(maximo, a);
    resultadofinal -= solve(maximo, b);
    resultadofinal += solve(maximo, lcm(a, b));

    cout << resultadofinal << endl;

    return 0;
}