#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

string intervalo(){
    float n;
    cin >> n;
    if(n < 0 || n > 100) return "Fora de intervalo\n";
    else if(n <= 25) return "Intervalo [0,25]\n";
    else if(n <= 50) return "Intervalo (25,50]\n";
    else if(n <= 75) return "Intervalo (50,75]\n";
    else return "Intervalo (75,100]\n";
}

int main(){
    cout << intervalo();    
    return 0;
}