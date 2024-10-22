#include <iostream>
#include <string>

using namespace std;

float imposto_de_renda(float renda){
    if(renda <= 2000) return -1;
    else if (renda <= 3000) return ((renda-2000)*0.08);
    else if (renda <= 4500) return ((renda-3000)*0.18 + 1000*0.08);
    else if (renda > 4500) return ((renda-4500)*0.28 + 1500*0.18 + 1000*0.08);
};

int main(){
    float renda, imposto_total;
    cin >> renda;
    imposto_total = imposto_de_renda(renda);
    if(imposto_total == -1) cout << "Isento";
    else cout << "R$ " << imposto_de_renda;
    return 0;
}