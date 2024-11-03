#include <bits/stdc++.h>
 
using namespace std;

int main(){
    string linhaDoTabuleiro;
    int contador = 0;
    vector<int> colunas;
    vector<int> linhas;
    for(int i = 1; i <= 8; i++){
        cin >> linhaDoTabuleiro;
        for(int j = 0; j < linhaDoTabuleiro.size(); j++){
            if(linhaDoTabuleiro[j] == '#'){
                linhas.push_back(i);
                colunas.push_back(j+1);
            }
        }
    }

    vector<int> linhasHab;
    vector<int> colunasHab;

    for(int i = 0; i < 8; i++){
        int* p = linhas.data();
        int* v = colunas.data();
        p = p+i;
        v = v+i;
        for(int j = 1; j <= 8;j++) if(*p != j) linhasHab.push_back(j);
        for(int j = 1; j <= 8;j++) if(*v != j) colunasHab.push_back(j);
    }

    for(int i = 0; i < 8; i++) cout << linhasHab[i] << " ";

    return 0;
}