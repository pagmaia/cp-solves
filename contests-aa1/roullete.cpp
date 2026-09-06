#include "bits/stdc++.h"

#define ll long long

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<set<int>> apostadores(n + 1);
    for(int i = 1; i <= n; i++){
        int nap;
        cin >> nap;
        for(int j = 0; j < nap; j++){
            int ap;
            cin >> ap;
            apostadores[i].insert(ap);
        }
    
    }
    int roleta;
    cin >> roleta;
    
    int menorapostas = 40;  
    for(int i = 1; i <= n; i++){
        if(apostadores[i].size() < menorapostas and apostadores[i].count(roleta)){
            menorapostas = apostadores[i].size();
        }
    }
    
    vector<int> ans;
    for(int i = 1; i <= n; i++){
        if(apostadores[i].size() == menorapostas and apostadores[i].count(roleta)){
            ans.push_back(i);
        }
    }

    cout << ans.size() << endl;
    for(int a : ans){
        cout << a << " ";
    }
    return 0;
}

