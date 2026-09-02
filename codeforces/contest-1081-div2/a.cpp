#include "bits/stdc++.h"

#define ll long long

using namespace std;


void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int rotate = 1;
    int resposta = 0;
    while(rotate <= n){
        int blocos = 1;
        vector<char> nova(n);
        for(int i = 0; i < n; i++){
            int pos = (i + rotate) % n;
            nova[i] = s[pos];
        }
        char start = nova[0];
        for(int i = 1; i < n; i++){
            if(nova[i] != start){
                blocos ++;
                start = nova[i];
            }
        }
        rotate ++;
        resposta = max(resposta, blocos);

    }
    cout << resposta << endl;

}



int main(){
    int t;
    cin >> t;
    while(t--){
	    solve();
    }


    return 0;
}



