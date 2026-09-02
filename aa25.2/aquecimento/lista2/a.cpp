#include <bits/stdc++.h>

using namespace std;

void binarysearch(vector<int> prefixsum, int target){
    int l = 0;
    int r = prefixsum.size() - 1;
    int answer = 0;

    while(l <)

}


void solve(){
    int doces, queries;
    cin >> doces >> queries;
    int sugar;
    vector<int> sugardoces;
    vector<int> prefixsum;

    for(int i = 0; i < doces; ++i){
        cin >> sugar;
        sugardoces.push_back(sugar);
    }
    sort(sugardoces.begin(), sugardoces.end(), [](int a, int b){
        return a > b;
    });
    int count = 0;
    for(int i : sugardoces){
        count += i;
        prefixsum.push_back(count);
    }
    
    for(int i = 0; i < queries; ++i){
        int target = 0;
        cin >> target;
        binaryse
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