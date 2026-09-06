#include "bits/stdc++.h"

using namespace std;


void pm(vector<vector<int>> &mat, int n, int m){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << mat[i][j];
			cout << " ";
		}
		cout << "\n";
	}
}


void solve(){
	int n, m;
	cin >> n >> m;
	int x1, x2, y1, y2;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	vector<vector<int>> mat(n, vector<int>(m));
	mat[x1 - 1][y1 - 1] = 1;
	mat[x2 - 1][y2 - 1] = 2;
	
    int a = x1 + y1;
    int b = x2 + y2;

    if(a % 2 != b % 2){
        for(int i = 0; i < n; i++){
           for(int j = 0; j < m; j++){
                if((i + j) % 2 == a % 2){
                    mat[i][j] = 1;
                }
                else{
                    mat[i][j] = 2;
                }

            }
        }
    }
    else{
        for(int i = 0; i < n; i++){
           for(int j = 0; j < m; j++){
                if(mat[i][j] == 2){
                    continue;
                }
                if((i + j) % 2 == a % 2){
                    mat[i][j] = 1;
                }
                else{
                    mat[i][j] = 3;
                }

            }
        }
    }

    pm(mat, n, m);
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}

	return 0;

}