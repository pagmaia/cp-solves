#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;

int n; int m;

vector<vector<char>> flp(vector<vector<char>> &mat){
    vector<vector<char>> flip = mat;
    for(int i = 0; i < mat.size(); i++){
        reverse(flip[i].begin(), flip[i].end());
    }
    return flip;
}

int valid(vector<vector<char>> &mat, vector<vector<char>> &org){
    if(mat.size() != n or mat[0].size() != m){
        return 0;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mat[i][j] == '.' and org[i][j] == '#'){
                return 0;
            }
        }  
    }
    return 1;
}
    
vector<vector<char>> rotate(vector<vector<char>> &mat){
    vector<vector<char>> rot(mat[0].size(), vector<char>(mat.size()));
    for(int i = 0; i < mat[0].size(); i++){
        for(int j = 0; j < mat.size(); j++){
            rot[i][j] = mat[j][i];
        }
    }
    for(int i = 0; i < mat[0].size(); i++){
        reverse(rot[i].begin(), rot[i].end());
    }
    return rot;
}

void printmat(vector<vector<char>> &mat){
    for(int i = 0; i < mat.size(); i++){
        for(int j = 0; j < mat[0].size(); j++){
            cout << mat[i][j];
        }
        cout << endl;
    }
}

void solve(){
    cin >> n >> m;
    int ans = 1;
    vector<vector<char>> mat(n, vector<char>(m));
    vector<vector<char>> it(n, vector<char>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m ; j++){
            cin >> mat[i][j];
            it[i][j] = mat[i][j];
        }
    }

    vector<vector<char>> flip = flp(mat);
    ans += valid(flip, mat);
    
    for(int i = 0; i < 3; i++){
        vector<vector<char>> rot = rotate(it);
        vector<vector<char>> flip = flp(rot);
        ans += valid(rot, mat);
        ans += valid(flip, mat);
        it = rot;
    }
    
    cout << ans << endl;
}



int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);

    int t = 1;
    while(t--){
	solve();
    }


    return 0;
}



