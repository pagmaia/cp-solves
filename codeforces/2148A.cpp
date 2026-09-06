#include <bits/stdc++.h>

using namespace std;

int main() {
    int testes;
    cin >> testes;

    while(testes--){
        int x; int n;
        cin >> x >> n;

        if(n % 2 == 0){
            cout << 0 << endl;
        }
        else{
            cout << x << endl;
        }
    }
    return 0;
}