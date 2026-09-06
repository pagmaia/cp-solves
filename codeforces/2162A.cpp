#include <bits/stdc++.h>

using namespace std;

int main(){
    int testes;
    cin >> testes;
    while(testes--){
        int tamanho;
        cin >> tamanho;
        vector<int> array(tamanho);
        for(int i = 0; i < tamanho; ++i){
            cin >> array[i];
        }

        cout << *max_element(array.begin(), array.end()) << endl;
    }
}   
