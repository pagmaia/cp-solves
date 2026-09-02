#include <bits/stdc++.h>

using namespace std;

int main(){
    int pcs;
    int operacoes;
    cin >> pcs >> operacoes;
    vector<int> computadores(pcs , 1);
    computadores[0] = 0;
    int versaomax = 1;

    for(int i = 0; i < pcs; ++i){
        cout << computadores[i] << endl;
    }

    for(int i = 0; i < operacoes; ++i){
        int versaoatual = 0;
        int versaofinal = 0;
        cin >> versaoatual >> versaofinal;
        int counter = 0;

        while(versaomax <= versaoatual){
            counter += computadores[versaomax];
            computadores[versaofinal] += computadores[versaomax];
            versaomax ++;
    }
    cout << counter << endl;
}
    return 0;
}
