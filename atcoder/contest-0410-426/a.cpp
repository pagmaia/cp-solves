#include <bits/stdc++.h>

using namespace std;

int main(){
    string x;
    string y;
    string version[3] = {"Ocelot", "Serval", "Lynx"};
    bool answer = false;
    cin >> x >> y;

    if(x == y or x == "Lynx"){
        answer = true;
    }
    else if(x == "Serval" and y == "Ocelot"){
        answer = true;
    }

    if(answer == true){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}