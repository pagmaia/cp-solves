#include <bits/stdc++.h>

using namespace std;

int main(){
    int testes;
    cin >> testes;
    for(int i = 0; i < testes; i++)
    {
        int k;
        cin >> k;

        if (k % 3 == 1){
            cout << "Yes\n" << endl;
        }
        else {
            cout << "No\n" << endl;

        }
    }
    return 0;
}