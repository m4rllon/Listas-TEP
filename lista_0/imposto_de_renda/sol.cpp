#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

float impostoDeRenda(float renda){
    if(renda <= 2000) {return -1;}
    else if (renda <= 3000) {return ((renda-2000)*0.08);}
    else if (renda <= 4500) {return ((renda-3000)*0.18 + 1000*0.08);}
    else if (renda > 4500) {return ((renda-4500)*0.28 + 1500*0.18 + 1000*0.08);}
    else {return renda;}
};

int main(){
    cout << fixed << setprecision(2);
    float renda, imposto_total;
    cin >> renda;
    imposto_total = impostoDeRenda(renda);
    if(imposto_total == -1) cout << "Isento" << "\n";
    else cout << "R$ " << imposto_total << "\n";
    return 0;
}