#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int contador = 0, n;
    cin >> n;
    cin >> s;
    for(int i = 1; i < n; i++){
        if(s[i] == s[i-1]) contador++;
    }
    cout << contador << "\n";
    return 0;
}