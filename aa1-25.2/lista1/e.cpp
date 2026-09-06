#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int resultado = 0;
    for(int i = a; i <= b; i++){
        if(i / 10000 == i % 10 and i / 1000 % 10 == i % 100 / 10){
            resultado ++;
        }
    }

    cout << resultado << endl;
    
    return 0;
}



