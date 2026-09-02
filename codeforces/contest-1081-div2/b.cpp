#include "bits/stdc++.h"

#define ll long long

using namespace std;


void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> pos0;
    vector<int> pos1;
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            pos1.push_back(i + 1);
        }
        else{
            pos0.push_back(i + 1);
        }
    }

    if(pos0.size() == n and pos1.size() == 0){
        cout << 0 << endl;
    }
    else if(pos1.size() == pos0.size() and pos1.size() % 2 == 0 or (pos1.size() % 2 == 0 and pos0.size() == 0)){
        cout << pos1.size() << endl;
        for(int p : pos1){
            cout << p << " ";
        }
        cout << "\n";
    }
    else if(pos1.size() > pos0.size() and pos0.size() % 2 == 1 or pos0.size() == pos1.size() and pos0.size() % 2 == 1){
        cout << pos0.size() << endl;
        for(int p : pos0){
            cout << p << " ";
        }
        cout << "\n";
    }
    else{
        cout << -1 << endl;
    }

}



int main(){
    int t;
    cin >> t;
    while(t--){
	    solve();
    }


    return 0;
}



