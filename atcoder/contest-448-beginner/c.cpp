#include "bits/stdc++.h"

#define ll long long

using namespace std;


int min(vector<pair<int,int>> &b, vector<int> &r){
    // 1 2 2 3 5 9
    int idx = 0;
    int min = INT_MAX;
    for(auto p : b){
        if(p.second == r[idx]){
            idx ++;
        }
        else{
            min = p.second;
        }

    }

    return min
}

int main(){
    int n, q;
    cin >> n >> q;
    vector<pair<int, int>> b(n);
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        b[i] = make_pair(a, i);
    }

    for(int i = 0; i < q; i++){
        int k;
        cin >> k;
        vector<int> r(k);
        for(int j = 0; j < k; j++){
            cin >> r[j];
            r[j] --;
        }
        sort(b.begin(), b.end());
        cout << min(b, r) << "\n";
        
    }

    return 0;
}



