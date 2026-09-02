#include <bits/stdc++.h>

using namespace std;

int main(){
    int ntestes;
    cin >> ntestes;
    for(int i = 0; i < ntestes; i++){
        int njogadas;
        string jogadas;
        cin >> njogadas;
        cin >> jogadas;
        
        if (jogadas.length() == njogadas){
            cout << jogadas.back() << endl;

        }
    }

    return 0;
}


