#include <bits/stdc++.h>
 
using namespace std;

int main(){
    string palavra, palavraAux = "";
    int operacoes, contador = 0;
    cin >> operacoes;
    for (int i = 0; i < operacoes; i++){
        cin >> palavra;
        if(palavraAux == ""){
            cout << palavra.size() << "\n";
            palavraAux = palavra;
        } else {
            while (palavra != palavraAux){
                char ultimaLetra1 = palavra.back();
                char ultimaLetra2 = palavraAux.back();
                if(ultimaLetra1 != ultimaLetra2){
                    palavraAux.pop_back();
                    contador++;
                    cout << contador << "\n";
                } 
            }
            
        }
    }

    return 0;
}