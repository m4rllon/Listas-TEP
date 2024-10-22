#include <iostream>
#include <string>

using namespace std;

string boliche(){
    int diametro, largura, altura, profundidade;
    cin >> diametro;
    cin >> altura >> largura >> profundidade;
    if(diametro <= altura && diametro <= profundidade && diametro <= largura) return "S";
    return "N";
}

int main(){
    cout << boliche() << "\n";
    return 0;
}