#include <bits/stdc++.h>

#define ll long long

using namespace std;


void solve(){
    int n; int k;
    cin >> n >> k;

    int pontes = (n * (n - 1)) / 2;

    if(k >= n - 1){
        cout << 1 << endl;
    }
    else{
        cout << n << endl;
    }
    

}
 

int main(){

    int testes;
    cin >> testes;
    while(testes--){
        solve();
    }
    
    return 0;
}