#include <iostream>
#include <string>

using namespace std;

string multiplos(int a, int b){
    int maior = (a > b) ? a : b;
    int menor = (a > b) ? b : a;
    if((maior / menor)*menor == maior){
        return "Sao Multiplos\n";
    } 
    return "Nao sao Multiplos\n";
}

int main(){

    int a, b;
    cin >> a >> b;
    cout << (multiplos(a, b));

    return 0;
}