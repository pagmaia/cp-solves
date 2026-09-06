#include <bits/stdc++.h>

using namespace std;

int main(){
    int h, v;
    cin >> h >> v;

    if(min(h, v) % 2 == 0) cout << "Malvika" << endl;
    else cout << "Akshat";

    return 0;
}