#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> m(n);
    vector<string> c(n);
    for(int i = 0; i < n; i++){
        cin >> m[i];
        c[i] = m[i];
    }

    for(int j = 0; j < n - 1; j++){
        c[0][j + 1] = m[0][j];
    }
    for(int i = 0; i < n - 1; i++){
        c[i + 1][n - 1] = m[i][n - 1];
    }
    for(int j = n - 1; j >= 1; j--){
        c[n - 1][j - 1] = m[n - 1][j];
        
    }
    for(int i = n - 1; i >= 1; i--){
        c[i - 1][0] = m[i][0];        
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << c[i][j];
        }
        cout << "\n";
    }

    
    return 0;
}