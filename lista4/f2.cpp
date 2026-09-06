#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    string parenteses;
    cin >> parenteses;
    map<int, int> somas;
    somas[0] = -1;
    int atual = 0;
    int maior = 0;
    int substrings = 1;

    for(int i = 0; i < parenteses.length(); ++i){
        if(parenteses[i] == '('){
            atual ++;
            somas[atual] = i;
        }
        else{
            atual --;
            somas.erase(atual + 1);
            if(!somas.count(atual)){
                somas[atual] = i;
                continue;
            }
            int tamanho = i - somas[atual];
            if(tamanho > maior){
                maior = tamanho;
                substrings = 1;
                continue;
            }
            if(tamanho == maior){
                substrings ++;
            }
        }
        
    }
    cout << maior << " " << substrings << endl;

    // )((())))(()())
    // -1 1 1 1 -1 -1 -1 -1 1 1 -1 1 -1 -1

    return 0;
}
