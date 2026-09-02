#include <bits/stdc++.h>

using namespace std;

int main(){
    int npontos, queries;
    cin >> npontos >> queries;
    vector<int> pontosa(npontos);
    for(int i = 0; i < npontos; ++i){
        cin >> pontosa[i];
    }

    sort(pontosa.begin(), pontosa.end());
    for(int i = 0; i < queries; ++i){
        int b;
        int posicao;
        cin >> b >> posicao;

        int ini = -1;
        int fim = 2e8;
        int resposta = 0;

        while(ini <= fim){
            int mid = ini + (fim - ini) / 2;
            
            auto lb = lower_bound(pontosa.begin(), pontosa.end(), b - mid);
            auto up = upper_bound(pontosa.begin(), pontosa.end(), b + mid);

            if(up - lb >= posicao){
                resposta = mid;
                fim = mid - 1;
            }
            else{
                ini = mid + 1;
            }
        }
        cout << resposta << endl;
    
    }
    return 0;
}

