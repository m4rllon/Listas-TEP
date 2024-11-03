#include <bits/stdc++.h>

using namespace std;

string searchInText(string texto){
    for(int i = 0; i < texto.size(); i++){
        if(texto[i] == 'H' || texto[i] == 'Q' || texto[i] == '9'){
            return "YES\n";
        } 
    };
    return "NO\n";
}

int main(){
    string texto;
    cin >> texto;
    cout << searchInText(texto);
    return 0;
}