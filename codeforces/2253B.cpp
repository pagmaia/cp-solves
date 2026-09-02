#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int start = a[0];
    int sz = 0;
    vector<pair<int, int>> blocks;
    for(int i = 0; i < n; i++){
        if(a[i] == start){
            sz++;
        }
        else{
            blocks.push_back({start, sz});
            sz = 1;
            start = a[i];
        }
    }
    blocks.push_back({start, sz});
    int pos = 0;

    if(blocks.size() == 1){
        cout << 1 << endl;
        return;
    }

    for(int i = 0; i < blocks.size(); i++){
        if(i > 0 and blocks[i].second > 1 and blocks[i - 1].second > 1){
            pos = max(pos, 2);
        }
        else if(i >= 1 and blocks[i].second >= 2 and blocks[i - 2].first != blocks[i].first){
            pos = max(pos, 1);
        }
        else if(i < blocks.size() - 1 and blocks[i].second >= 2){   
            if(i + 2 < blocks.size() and blocks[i + 2].first != blocks[i].first){
                pos = max(pos, 1);
            }
            else if(i == blocks.size() - 2 and blocks[i + 1].first != blocks[i].first){
                pos = max(pos, 1);
            }
        }
    }
    cout << blocks.size() + pos << endl;

}



int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
	    solve();
    }


    return 0;
}



