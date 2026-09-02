#include "bits/stdc++.h"

#define ll long long

using namespace std;

const int MAX = 2e5 + 10;

void solve(){
    int n;
    cin >> n;
    vector<int> num(MAX);
    for(int i = 1; i <= n; i++){
        cin >> num[i];
    }
   

    while(true){
        bool troca = false;
        for(int i = 1; i <= n / 2; i++){
            if(num[2 * i] < num[i]){
                swap(num[i], num[2 * i]);
                troca = true;
            }
        }
        if(!troca) break;
    }


    for(int i = 1; i <= n; i++){
        if(num[i] != i){

            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
    return;
    

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}



