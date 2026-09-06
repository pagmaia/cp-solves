#include "bits/stdc++.h"
 
#define ll long long
#define endl "\n"
 
using namespace std;


bool ipvalid(string ip, int n){
    vector<int> seen(10);
    string pal = "";
    for(int i = ip.size() - 1; i >= 0; i--){
        pal += ip[i];
        seen[ip[i] - '0'] = 1;
    }
    if(pal == ip and accumulate(seen.begin(), seen.end(), 0) == n){
        return true;
    }
    return false;
}

void solve(){
    int n;
    cin >> n;
    vector<int> digs(10, 0);
    vector<string> dig;
    for(int i = 0; i < n; i++){
        int num; cin >> num;
        digs[num] = 1;
    }
    
    if(n >= 7){
        cout << 0 << endl;
        return;
    }
    
    for(int i = 0; i < 256; i++){
        string dg = to_string(i);
        bool pos = true;
        for(char c : dg){
            if(!digs[c - '0']){
                pos = false;
                break;
            }
        }
        if(pos){
            dig.push_back(dg);
        }
    }
    
    int sz = dig.size();
    vector<string> ans;
    for(int i = 0; i < sz; i++){  
        for(int k = 0; k < sz; k++){
            for(int j = 0; j < sz; j++){
                string pos = dig[i] + dig[k] + dig[j];
                string half = "";
                for(int x = 0; x < 3; x++){
                    half += pos[x];
                    string t = half;
                    reverse(t.begin(), t.end());
                    int num = stoi(t);
                    if(num > 255){
                        continue;
                    }
                    if(!num and t != "0" or t.size() > 1 and t[0] == '0'){
                        continue;
                    }
                    string test = pos + t;
                    if(ipvalid(test, n)){
                        ans.push_back(dig[i] + '.' + dig[k] + '.' + dig[j] + '.' + t);
                    }
                }
            }
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for(string s : ans){
        cout << s << endl;
    }
}	
 
int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);
 
    int t;
    t = 1;
    while(t--){
	    solve();
    }
 
 
    return 0;
}

