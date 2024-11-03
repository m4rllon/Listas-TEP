#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(0); \
              cin.tie(0); \
              cout.tie(0)

int frequencia(const vector<int>& arr, int elemento){
    int contador = 0;
    for(int num:arr){
        if(num == elemento) contador++;
    }
    return contador;
}

int main(){
    int a0, a1, a2, a3, contador=0;
    cin >> a0 >> a1 >> a2 >> a3;
    vector<int> lista = {a0, a1, a2, a3};

    for(int i = 0; i < 4; i++){
        int freq = frequencia(lista, lista[i]);
        if(freq == 2 || freq == 3){
            cout << freq << "\n";
            contador++;
        } 
        if(freq == 4) contador+=2;
    }

    cout << contador << "\n";


    return 0;
}