#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    string parenteses;
    cin >> parenteses;
    stack<char> pilha;

    int maior = 0;
    int substrings = 1;
    int atual = 0;
    int tamanho = parenteses.size();
    
    for(int i = 0; i < tamanho; ++i){
        cout << maior << " " << atual << endl;
        if(parenteses[i] == '(' and (pilha.empty() or pilha.top() == '(')){
            pilha.push('(');
            atual ++;
        }
        else if(parenteses[i] == ')' and (!pilha.empty()) and pilha.top() == '('){
            pilha.pop();
            atual ++;
        }
        else if(parenteses[i] == ')' and pilha.empty() and atual != 0){
            if(atual == maior){
                substrings ++;
            }
            maior = max(maior, atual);
            atual = 0;
        }
        maior = max(maior, atual);
    }
    maior = max(maior, atual);

    if(!(pilha.empty())){
        maior -= pilha.size();
    }
    if(atual == 0){
        substrings --;
    }

    cout << maior << " " << substrings << endl;
    
    return 0;
}
// (()())()(())()()()