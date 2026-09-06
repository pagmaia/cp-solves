#include <bits/stdc++.h>

using namespace std;

int main(){
    int ntestes;
    cin >> ntestes;

    for(int i = 0; i < ntestes; i++){
        int nlasershorizontais;
        int nlasersverticais;
        int xfinal;
        int yfinal;
        int s;
        cin >> nlasershorizontais >> nlasersverticais >> xfinal >> yfinal;

        for(int i = 0; i < nlasershorizontais; i++){
            cin >> s;
        }

        for(int i = 0; i < nlasersverticais; i++){
            cin >> s;
        }

        cout << nlasershorizontais + nlasersverticais << endl; 

    }
    return 0;
}

