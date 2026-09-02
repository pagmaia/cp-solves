#include "bits/stdc++.h"

#define ll long long
#define endl "\n"

using namespace std;

vector<pair<int, int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
pair<int, int> start;
int n, m;

bool bounds(int i, int j){
    if(i >= 0 and j >= 0 and i < n and j < m){
        return true;
    }
    return false;
}

bool isSafe(int i, int j, vector<vector<char>> &mat){
    if(bounds(i, j)){
        if(mat[i][j] != 'T' and mat[i][j] != '#'){
            return true;
        }
    }
    return false;
    
}

bool checkTrap(int i, int j, vector<vector<char>> &mat){
    for(auto d : dir){
        int x = i + d.first;
        int y = j + d.second;

        if(bounds(x, y) and mat[x][y] == 'T'){
            return true;
        }
    }
    return false;
}

int bfs(pair<int, int> s, vector<vector<char>> &mat, vector<vector<bool>> &vis){
    int tes = 0;
    queue<pair<int, int>> q;
    q.push(s);
    
    while(!q.empty()){
        pair<int, int> p = q.front();
        q.pop();

        if(isdigit(mat[p.first][p.second])){
            tes += mat[p.first][p.second] - '0';
        }

        if(checkTrap(p.first, p.second, mat)){
            continue;
        }
        
        for(auto d : dir){
            int x = p.first + d.first;
            int y = p.second + d.second;
            if(isSafe(x, y, mat) and !vis[x][y]){
                q.push(make_pair(x, y));
                vis[x][y] = true;
            }
        }

    }
    return tes;
}

void solve(){
    vector<vector<char>> mat(n, vector<char>(m));
    vector<vector<bool>> vis(n, vector<bool>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat[i][j];
            if(mat[i][j] == 'S'){
                start = make_pair(i, j);
                vis[i][j] = true;
            }
        }
    }
    cout << bfs(start, mat, vis) << endl;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    while(cin >> n >> m){
        solve();
    }


    return 0;
}



